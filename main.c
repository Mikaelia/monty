#include "monty.h"
char *globaln = 0;
/**
  * main - interprets monty bytecode
  *
  * Return: void
  */
int main(__attribute__((unused))int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[i] != 0)
	{
		i++;
	}
	if (i < 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	getfile(argv[1]);
	return(0);
}

