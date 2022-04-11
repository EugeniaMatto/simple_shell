#include "main.h"
/**
 * getPATH - obtains path of command
 * @command : command to verify (exe. ls)
 * @env: arr env variables
 * Return: path of command or NULL
 */
char *getPATH(char *command, char **env)
{
	char *s = getENV(env, "PATH");
	char *actual = malloc(1024);
	int i = 0, letras = 0, j = 0, paths = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ':')
			paths++;
		i++;
	}

	i = 5; /* PATH=/bin... */
	while (paths > 0)
	{
		if (s[i] == ':')
		{
			j = 0;
			actual[letras] = '/';
			letras++;
			while (command[j])
			{
				actual[letras] = command[j];
				letras++;
				j++;
			}
			actual[letras] = '\0';
			if (exists(actual) == 0)
				return (actual);
			letras = 0;
			paths--;
		}
		else
		{
			actual[letras] = s[i];
			letras++;
		}
		i++;
	}
	free(actual);
	return (NULL);
}
