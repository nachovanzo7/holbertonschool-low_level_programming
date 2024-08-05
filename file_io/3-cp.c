#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
*
*
*
*
*/

void copiar_contenido(int op_from, int op_to, const char *file_from, const char *file_to)
{
	int rd, wr;
	char array[1024];

	rd = read(op_from, array, 1024);

	while (rd > 0)
	{
		wr = write(op_from, array, rd);

		if (wr < 0 || wr != rd)
		{
			printf("Error: Can't write to %s\n", file_to);
			close(op_from);
			close(op_to);
			exit(99);
		}
	}

	if (rd < 0)
	{
		printf("Error: Can't read from file %s\n", file_from);
		close(op_from);
		close(op_to);
		exit(98);
	}
}

int main(int argc, char *argv[])
{
	int op_from, op_to;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	op_from = open(argv[1], O_RDONLY);
	if (op_from < 0)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	op_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (op_to < 0)
	{
		close(op_from);
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copiar_contenido(op_from, op_to, argv[1], argv[2]);
	close(op_from);
	close(op_to);
	return (0);
}
