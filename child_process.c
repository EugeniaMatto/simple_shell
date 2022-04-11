#include "main.h"

/**
 * child_process - makes a fork
 * @av: arguments
 * @argv: flags
 * @env: env
 * Return: nothing
 */
void child_process(char **av, char **argv, char **env)
{
	int status = 0;
	pid_t pid_child = -1;

	pid_child = fork();

	if (pid_child == -1)
		perror(av[0]);

	if (pid_child == 0)
	{
		if (execve(argv[0], argv, env) == -1)
			perror(av[0]);
	}
	else
	{
		if (waitpid(-1, &status, 0) == -1)
			perror(av[0]);
	}

}
