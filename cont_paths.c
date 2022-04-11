#include "main.h"

/**
 * cont_paths - counts paths
 * @s: string
 * Return: number of paths
 */
int cont_paths(char *s)
{
	int i = 0, paths = 0;

	if (s == NULL)
		return (0);

	while (s[i])
	{
		if (s[i] == ':')
		{
			paths++;
		}
		i++;
	}

	return (paths);
}
