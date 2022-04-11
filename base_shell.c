#include "main.h"
/**
 * base_shell - shell inside loop content
 * @buffer: buffer
 * @av: arguments array
 * @env: env variables
 * @mode: interactive or non
 * Return: pointer to first char of the buffer
 */
char *base_shell(char *buffer, char **av, char **env, int mode, char *command)
{
	size_t chars = 0, buffsize = 1024;
	int notSpace = 0, i = 0, j = 0, commit = 0;

	chars = getline(&buffer, &buffsize, stdin);
	if (chars == (size_t) -1)
		_noline(buffer, command, mode);
	buffer[chars - 1] = '\0';
	while ((int) chars > i && commit == 0)
	{
		if (buffer[i + 1] == '\0' || buffer[i + 1] == ';'
				|| buffer[i + 1] == '#')
		{
			command[j] = buffer[i];
			command[j + 1] = '\0';
			j = 0;
			notSpace = 0;
			while (command[j])
			{
				if (command[j] != ' ')
					notSpace = 1;
				j++;
			}
			if (notSpace == 1)
				_execute_command(command, buffer, av, env);
			j = 0;
			if (buffer[i + 1] == '#')
				commit = 1;
			i++;
		}
		else if (buffer[i] != ';')
		{
			command[j] = buffer[i];
			j++;
		}
		i++;
	}

	return (buffer);
}
