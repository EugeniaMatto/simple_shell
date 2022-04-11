#include "main.h"
/**
 * main - main for  our own shell
 * @ac: args count
 * @av: args list
 * @env: var env array
 * Return: Always 0.
 */
int main(int __attribute__((unused)) ac, char **av, char **env)
{
	char *buffer;  /* 0 non-interactive / 1 interactive */
	int buffsize = 1024;

	buffer = malloc(sizeof(char) * (buffsize));
	if (buffer == NULL)
		exit(1);

	signal(SIGINT, sig_ctrl);

	if (isatty(STDIN_FILENO) == 1)
	{
		while (1)
		{
			write(STDIN_FILENO, "$ ", 2);
			buffer = base_shell(buffer, av, env, 1);
		}
	}
	else
	{
		write(STDIN_FILENO, "$ ", 2);
		buffer = base_shell(buffer, av, env, 0);
	}

	free(buffer);
	return (0);
}
