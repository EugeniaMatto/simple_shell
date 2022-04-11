#include "main.h"
/**
 * printENV - print env variables
 * @env: env variables in array
 * @argv: arguments
 * Return: always 0
 */
int *printENV(char **env, char **argv)
{
	int i = 0;

	freeMatrix(argv);
	while (env[i])
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}

	return (0);
}
