#include "main.h"
/**
 * base_shell - shell inside loop content
 * @buffer: buffer
 * @command: command
 * @av: arguments array
 * @env: env variables
 * @mode: interactive or non
 * Return: pointer to first char of the buffer
 */
char *base_shell(char *buffer, char **av, char **env, int mode, char *command)
{
	size_t chars = 0, buffsize = 1024, i = 0, j = 0, commit = 0;

	chars = getline(&buffer, &buffsize, stdin);
	if (chars == (size_t) -1)
		_noline(buffer, command, mode);
	buffer[chars - 1] = '\0';
	while (chars > i && commit == 0 && (no_letter(buffer) == 1))
	{
		if ((buffer[i] == ';' && buffer[i + 1] == ';') ||
	(buffer[i] == ';' && buffer[i + 1] == ';'))
		{
			printf("%s: 1: Syntax error: \"%c%c\" unexpected\n", av[0], ';', ';');
			return (buffer);
		}

		if (buffer[i + 1] == '\0' || buffer[i + 1] == ';'
				|| buffer[i + 1] == '#')
		{
			command[j] = buffer[i];
			command[j + 1] = '\0';
			if (no_letter(command) == 1)
				_execute_command(command, buffer, av, env);
			j = 0;
			if (buffer[i + 1] == '#')
				commit = 1;
			i++;
		}
		else if (buffer[i] != ';')
		{
			if (buffer[i] == 9)
				command[j] = ' ';
			else
				command[j] = buffer[i];
			j++;
		}
		i++;
	}
	return (buffer);
}
