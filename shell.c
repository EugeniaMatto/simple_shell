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
	char *buffer, mode = 0; /* 0 non-interactive / 1 interactive */
	int buffsize = 1024;

	if (isatty(STDIN_FILENO))
		mode = 1;

	buffer = malloc(sizeof(char) * (buffsize));
	if (buffer == NULL)
		exit(1);

	signal(SIGINT, sig_ctrl);

	while (1)
	{
		if (mode == 1)
			write(STDIN_FILENO, "#cisfun$ ", 9);
		buffer = base_shell(buffer, av, env);
	}

	free(buffer);
	return (0);
}
