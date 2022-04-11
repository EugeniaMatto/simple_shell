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
		printf("%s\n", env[i]);
		i++;
	}

	return (0);
}
