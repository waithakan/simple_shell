#include "main.h"
/**
 * get_sigint-Handles the crtl + c calls in the prompt
 * @sig: Signals handler
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
