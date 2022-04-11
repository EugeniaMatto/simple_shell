#include "main.h"

/**
 * _noline - function that handles error of getline() == -1
 * @buffer: buffer
 *
 * Return: void
 */
void _noline(char *buffer, char *command, int mode)
{
	if (mode == 1)
		printf("\n");
	free(buffer);
	free(command);
	exit(0);

}
