#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	char c;
	unsigned int i = 0, n = 0, j = _strlen(s) - 1, null = -1;
	int flag = 0, sign = 1;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (-1);
	i++;
	}
	for (i = 0; i <= j; i++)
	{
		c = s[i];
		if (c == '-')
			sign *= -1;
		if (c >= '0' && c <= '9')
		{
			n = n * 10 + (c - '0');
			flag = 1;
		}
		if (flag == 1)
		{
			if (!(c >= '0' && c <= '9'))
				break;
		}
	}
	if (sign == -1)
	{
		n *= -1;
	}
	if (j == null)
		return (0);
	return (n);
}
