#include "shell.h"
/**
 * main - Runs the shell
 *
 * Return: 0
 */
int main(void)
{
	shell_t shell;

	initialize(&shell);
	signal(SIGINT, ssh_handl_signint);
	ssh_repl();
	ssh_repl(&shell);
	uninitialize(&shell);

	return (0);
}
