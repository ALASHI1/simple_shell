#include "shell.h"

/**
 *  ssh_prompt - prints the prompt
 */
void ssh_prompt(void)
{
	write(STDOUT_FILENO, "#cisfun$ ", 10);
}
