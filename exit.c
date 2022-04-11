#include "main.h"
/**
 * eexit - function that executes when user types exit
 * @command: command
 * @buffer: line
 * @av: av
 * @argv: arguments array
 * Return: nothing
 */
void eexit(char **av, char **argv, char *buffer, char *command)
{
	int exitstatus = 0, i = 0;
	char *s = ": 2: exit: Illegal number: ";
	char *total = malloc(_strlen(av[0]) + _strlen(argv[1]) + _strlen(s) + 1);

	while (av[0][i])
	{
		total[i] = av[0][i];
		i++;
	}
	while (s[exitstatus])
	{
		total[i] = s[exitstatus];
		i++;
		exitstatus++;
	}

	exitstatus = 0;
	while (argv[1][exitstatus])
	{
		total[i] = argv[1][exitstatus];
		exitstatus++;
		i++;
	}
	total[i + 1] = '\0';
	if (argv[1] != NULL)
	{
		exitstatus = _atoi(argv[1]);
		if (exitstatus < 0)
		{
			write(STDERR_FILENO, total, i + 3);
			write(STDERR_FILENO, "\n", 1);
			free(total);
			exit(-1);
		}
	}
	free(total);
	freeMatrix(argv);
	free(buffer);
	free(command);
	exit(exitstatus);
}
