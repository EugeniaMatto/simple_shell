#include "main.h"

/**
 * _noline - function that handles error of getline() == -1
 * @buffer: buffer
 *
 * Return: void
 */
void _noline(char *buffer, int mode)
{
	if (mode == 1)
		printf("\n");
	free(buffer);
	exit(0);

}
