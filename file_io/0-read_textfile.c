#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
*read_textfile - Leer mensaje (filename) y imprimirlo
*Return: cantidad de bytes impresos
*@filename: string para leer e imprimir
*@letters: cantidad de letras que deberia imprimir
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, wr, rd;
	size_t len;
	char *string;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);
	string = (char *)malloc(letters);

	if (string == NULL)
	{
		close(op);
		return (0);
	}

	rd = read(op, string, letters);
	if (rd < 0)
	{
		free(string);
		close(op);
		return (0);
	}

	len = strlen(string);
	if (len >= letters)
		wr = write(STDOUT_FILENO, string, letters);
	else
		wr = write(STDOUT_FILENO, string, len);
	if (wr < 0 || wr != rd)
	{
		free(string);
		close(op);
		return (0);
	}
	free(string);
	close(op);
	return (wr);
}
