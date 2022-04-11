#include "main.h"

/**
 * _noline - function that handles error of getline() == -1
 * @buffer: buffer
 *
 * Return: void
 */
void _noline(char *buffer)
{
	free(buffer);
	exit(0);

}
