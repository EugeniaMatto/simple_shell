#include "main.h"

/**
 * exists - checks if the route is valid
 * @path: path
 * Return: 0 if exists or -1 if not
 */
int exists(char *path)
{
	struct stat st;

	if (stat(path, &st) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}

}
