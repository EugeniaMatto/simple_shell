#include "main.h"

/**
 * freeMatrix - free array 2d
 * @mat: array 2d to free
 * Return: always 0
 */
int freeMatrix(char **mat)
{
	int i = 0;

	while (mat[i])
		i++;

	while (i >= 0)
	{
		free(mat[i]);
		i--;
	}
	free(mat);

	return (0);
}
