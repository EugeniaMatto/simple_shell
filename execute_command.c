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

	if (_strcmp("exit", argv[0]) == 0)
		eexit(av, argv, buffer, command);
	if (_strcmp("env", argv[0]) == 0)
	{
		printENV(env, argv);
		return;
	}
	if (_strcmp("$$", argv[0]) == 0)
	{
		printf("%d\n", getpid());
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
		child_process(av, argv, env);
	else
		perror(av[0]);
	freeMatrix(argv);
}
