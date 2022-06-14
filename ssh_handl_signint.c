#include "shell.h"

/**
 * ssh_handl_signint - Handle Ctrl + c call in prompt.
 *
 * @sig: Signal
 */
void ssh_handl_signint(int sig)
{
	(void) sig;
	write(STDOUT_FILENO, "\n#cisfun$ ", 11);
}
