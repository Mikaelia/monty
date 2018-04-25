#include "monty.h"
/**
  * tokenize - breaks up file line into tokens to isolate command
  *
  * Return: Array of tokens
  */
char **tokenize(char *line)
{
	const char *deliminator  = " ";
	int bufsize = 3;
	char **tokens;
	char *token;

	tokens = malloc(sizeof(char *) * bufsize);
	token = strdup(strtok(line, deliminator));
	if (!token)
	{
		printf("Token Error");
		return (0);
	}
	tokens[0] = token;
	tokens[1] = strdup(strtok(NULL, deliminator));
	tokens[3] = '\0';
	return (tokens);
}
