#include "main.h"
/**
 * sig_ctrl - ignore signal ctrl c
 * @c: signum
 * Return: void
 */
void sig_ctrl(__attribute__((unused)) int c)
{
		write(STDIN_FILENO, "\n#cisfun$ ", 10);
		signal(SIGINT, sig_ctrl);
}
