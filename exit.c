#include "main.h"
/**
 * eexit - function that executes when user types exit
 * @command: command
 * @buffer: line
 * @argv: arguments array
 * Return: nothing
 */
void eexit(char **argv, char *buffer, char *command, int mode)
{
	int exitstatus = 0;

	if (mode == 0)
	{
		write(STDIN_FILENO, "$ ", 2);
		exit(0);
	}

	if (argv[1] != NULL)
	{
		exitstatus = _atoi(argv[1]);
		if (exitstatus <= 0)
		{
			perror(argv[1]);
			return;
		}
	}
	freeMatrix(argv);
	free(buffer);
	free(command);
	exit(exitstatus);
}
