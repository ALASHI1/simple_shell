#include "shell.h"

/**
 * ssh_repl - Read-Eval-Print-Loop for the shell
 */
void ssh_repl(void)
{
	char *cmd;
	int chr;

	do {
		ssh_prompt();

		cmd = read_line(&chr);
		if (chr == -1)
		{
			free(cmd);
			write(STDOUT_FILENO, "\n", 2);
			exit(EXIT_SUCCESS);
		}

		if (cmd == NULL)
			continue;

		free(cmd);
	} while (1);
}
