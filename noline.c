#include "main.h"

/**
 * _noline - function that handles error of getline() == -1
 * @buffer: buffer
 * @mode: mode interactive or non
 * Return: void
 */
void _noline(char *buffer, int mode)
{
	if (mode == 1)
		printf("$ ");
	free(buffer);
	exit(0);

}
