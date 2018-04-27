#include "monty.h"
/**
  * tokenize - breaks up file line into tokens to isolate command
  * @line: input line from file
  *
  * Return: Array of line tokens
  */
char **tokenize(char *line)
{
	const char *deliminator  = "\n ";
	int bufsize = 3;
	char **tokens;
	char *token;

	tokens = malloc(sizeof(char *) * bufsize);
	if (!tokens)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, deliminator);
	if (!token)
	{
		printf("Token Error");
		free2pointer(tokens);
		return (0);
	}
	if (token[0] == '#')
	{
		free(tokens);
		return (0);
	}
	tokens[0] = token;
	globaln = strtok(NULL, deliminator);
	return (tokens);
}
