#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
*append_text_to_file - Anexa datos al final del archivo
*Return: 1 por exito, -1 por error
*@filename: nombre del archivo
*@text_content: contenido para anexar
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, (O_WRONLY | O_APPEND));

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
	return (1);
}
