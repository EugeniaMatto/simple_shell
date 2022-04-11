#include "main.h"
/**
 * eexit - function that executes when user types exit
 * @command: command
 * @buffer: line
 * @argv: arguments array
 * Return: nothing
 */
void eexit(char **argv, char *buffer, char *command)
{
	int exitstatus = 0;

	if (argv[1] != NULL)
	{
		exitstatus = _atoi(argv[1]);
		if (exitstatus <= 0)
		{
			perror(argv[1]);
			exit(-1);
		}
	}
	freeMatrix(argv);
	free(buffer);
	free(command);
	exit(exitstatus);
}
