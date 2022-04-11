#include "main.h"
/**
 * strtow - separates string into words
 * @str: string to separate
 * Return: pointer to array
 */
char **strtow(char *str)
{
	int i = 0, j = 0, n = 0, x = 0, a = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		/**Si estoy parado en la ultima letra de una palabra n++*/
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			n++;
	}
	s = malloc(sizeof(char *) * (n + 1));
	if (s == NULL)
		return (NULL);
	/**mientras letras en str y no haya guardado todas las palabras (x < n)*/
	for (i = 0; str[i] && x < n; i++)
	{
		/**cuento las letras de la palabra*/
		if (str[i] != ' ')
			j++;
		/**si estoy parado en la ultima letra de una palabra*/
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			/**gurado espacio para la cantidad de letras de palabra y nulo*/
			s[x] = malloc(sizeof(char) * (j + 1));
			/*
			 * ej: si mi palabra es "hola" yo estoy parado en la 'a', j = 4,
			 * entonces 1 - j = -3 la variable a para el primer caso seria 0,
			 * entonces estaría en la posición i-3 = 'h'
		    */
			for (a = 0; a < j; a++)
				s[x][a] = str[a + i + 1 - j];
			s[x][a] = '\0';
			/**x guarda la cantidad de palabras guardadas*/
			x++;
			j = 0;
		}
	}
	s[x] = NULL;
	return (s);
}
