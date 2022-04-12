#include "main.h"
/**
 * sets - Implement the setenv and unsetenv builtin commands
 * @argv: argv
 */
void sets(char **argv)
{
	if(_strcmp("setenv", argv[0]) == 0)
	{
		if (setenv(argv[1], argv[2], 1) == -1)
			perror(NULL);
	}
	else
	{
		if (unsetenv(argv[1]) == -1)
			perror(NULL);
	}
}
