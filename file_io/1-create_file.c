#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*create_file - Crea un archivo nuevo
*Return: 1 por exito, -1 por error
*@filename: nombre del archivo
*@text_content: string para escribir en el archivo
*/

int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, (O_WRONLY | O_CREAT | O_TRUNC), 0600);

	if (op < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wr = write(op, text_content, len);

		if (wr < 0 || wr != len)
		{
			close(op);
			return (-1);
		}
	}

	close(op);
	return (-1);
}
