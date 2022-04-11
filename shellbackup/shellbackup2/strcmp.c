#include "main.h"

/**
 * _strcmp - compares 2 strings
 *@s1: stringaa 1
 *@s2: str 2
 * Return: 0 if ==
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int a = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	a = (s1[i] - s2[i]);
	return (a);
}
