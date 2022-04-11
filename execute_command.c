#include "main.h"
/**
 * _execute_command - search file to execute
 * @command: command
 * @buffer: line
 * @av: arguments array
 * @env: env variables
 * Return: nothing (executes the command and sends it to stdin)
 */
void _execute_command(char *command, char *buffer, char **av, char **env)
{
	char **argv = strtow(command), *aux;
	int status = 0;
	pid_t pid_child = -1;

	EXITSTATUS = &status;
	if (_strcmp("exit", argv[0]) == 0)
		eexit(av, argv, buffer, command);
	if (_strcmp("env", argv[0]) == 0)
	{
		printENV(env, argv);
		return;
	}
	if (argv[0][0] != '/')
	{
		aux = getPATH(argv[0], env);
		if (aux)
		{
			free(argv[0]);
			argv[0] = _strdup(aux);
			free(aux);
		}
	}
	if (exists(argv[0]) == 0)
	{
		pid_child = fork();
		if (pid_child == -1)
			perror(av[0]);
		if (pid_child == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror(av[0]);
		}
		else
		{
			if (waitpid(-1, &status, 0) == -1)
				perror(av[0]);
		}
	}
	else
		perror(av[0]);
	freeMatrix(argv);
}
