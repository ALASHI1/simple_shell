#include "shell.h"

/**
 * main - Runs the shell
 *
 * Return: 0
 */
int main(void)
{
	signal(SIGINT, ssh_handl_signint);
	ssh_repl();

	return (0);
}
