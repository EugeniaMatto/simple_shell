#include "main.h"

/**
 * getENV - get $PATH
 * @env: env variables array
 * @var: variable
 * Return: variable ENV
 */
char *getENV(char **env, char *var)
{
	int i = 0, j = 0, es = 0;
	char *s = _strdup(var);

	if (env == NULL)
	{
		perror(NULL);
		return (NULL);
	}
	while (env[i])
	{
		j = 0;
		es = 0;
		while (s[j])
		{
			if (!(env[i][j] == s[j]))
			{
				es = 1;
			}
			j++;
		}

		if (es == 0)
		{
			free(s);
			return (env[i]);
		}
		i++;
	}

	free(s);
	return (NULL);
}
