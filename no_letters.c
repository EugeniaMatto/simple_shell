#include "main.h"

/**
 * no_letter - cheks if a string is only spaces
 * @str: string to compare
 * Return: 0 if the string is only spaces, 1 if has letters
 */
int no_letter(char *str)
{
	int i = 0, flag = 0;

	while (str[i])
	{
		if (str[i] != ' ')
			flag = 1;
		i++;
	}
	if (flag == 1)
		return (1);

	return (0);

}
