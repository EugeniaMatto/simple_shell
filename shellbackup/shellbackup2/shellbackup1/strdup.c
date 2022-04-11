#include "main.h"
/**
 * _strdup - copia un array
 * @str: string
 * Return: array copiado
 */
char *_strdup(char *str)
{
	char *p = NULL;
	int b, i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (b = 0; b < i; b++)
		p[b] = str[b];
	p[i] = '\0';

	return (p);
}
