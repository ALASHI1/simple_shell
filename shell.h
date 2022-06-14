#ifndef SHELL_H
#define SHELL_H

#define BUFSIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void ssh_handl_signint(int sig);
void ssh_repl(void);

void ssh_prompt(void);
char *read_line(int *chr);

#endif /* SHELL_H */