#include "main.h"

/**
 * _strlen - gets thesize of a string
 * @s: string
 * Return: size of string
 */
int _strlen(char *s)
{
	int count;
	char c;

	c = *s;
	count = 0;

	while (c != '\0')
	{
		count++;
		c = *(s + count);
	}
	return (count);
}
