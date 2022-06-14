#include "shell.h"

/**
 *  ssh_read_line - reads characters from the standard input
 *  stream.
 *
 *  @chr: the count of characters read
 *
 *  Return: pointer to the output string
 */
char *ssh_read_line(int *chr)
{
	char *input = NULL;
	size_t bufsize = BUFSIZE;

	*chr = getline(&input, &bufsize, stdin);

	return (input);
}