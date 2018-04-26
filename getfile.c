#include "monty.h"
/**
  * getfile - opens file and gets the lines
  *
  */
int getfile(char *file)
{
	FILE *fptr;
	char *line = NULL;
	size_t bufsize = 0;
	ssize_t read;
	char **args;
	stack_t *head;
	unsigned int line_number;

	head = NULL;
	line_number = 0;

	/* open file */
    if ((fptr = fopen(file, "r")) == NULL)
    {
		printf("Error: Can't open file %s", file);
        exit(EXIT_FAILURE);
    }
	/* read line from file */
	while ((read = getline(&line, &bufsize, fptr)) != -1)
	{
		line_number++;
		args = tokenize(line);
		if (!args)
		{
			printf("Tokenize error");
    		fclose(fptr);
			exit(EXIT_FAILURE);
		}
	/*Find function to opcode, and return the head of stack */
		(getop(args, line_number))(&head, line_number);
		free(args);
	}
	if (head)
		freestack(head);
	free(line);
    fclose(fptr);
    return (0);
}

