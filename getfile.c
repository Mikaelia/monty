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

	head = NULL;
    if ((fptr = fopen(file, "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

	int line_number = 0;
	while ((read = getline(&line, &bufsize, fptr)) != -1)
	{
		line_number++;
		args = tokenize(line);
		/*Here we will get the correct function from opcode, and return the head of stack */
		head = (getop(args));
		printf("First arg: %s Second arg: %s\n", args[0], args[1]);
	}
    fclose(fptr);
	free(line);

    return 0;
}

