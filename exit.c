#include "main.h"
/**
 * eexit - function that executes when user types exit
 * @command: command
 * @buffer: line
 * @argv: arguments array
 * @av: av
 * Return: nothing
 */
void eexit(char **av, char **argv, char *buffer, char *command)
{
	int exitstatus = 0;

	if (argv[1] == NULL)
	{
		freeMatrix(argv);
		free(buffer);
		free(command);
		exit(0);
	}

	if (argv[1] != NULL)
	{
		exitstatus = _atoi(argv[1]);
		if (exitstatus <= 0)
		{
			printf("%s: 1: exit: Illegal number: %s\n", av[0], argv[0]);
			exit(2);
		}
	}
	freeMatrix(argv);
	free(buffer);
	free(command);
	exit(exitstatus);
}
