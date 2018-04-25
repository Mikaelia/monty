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
    if ((fptr = fopen(file, "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

	line_number = 0;
	while ((read = getline(&line, &bufsize, fptr)) != -1)
	{
		line_number++;
		args = tokenize(line);
		/*Here we will get the correct function from opcode, and return the head of stack */
		if (!args)
		{
			printf("Tokenize error");
			exit(EXIT_FAILURE);
		}
		(getop(args))(&head, line_number);
	}
    fclose(fptr);
	free(line);

    return 0;
}

