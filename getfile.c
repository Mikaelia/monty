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

    if ((fptr = fopen(file, "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

	while ((read = getline(&line, &bufsize, fptr)) != -1)
	{
		printf("Retrieved line of length %zu :\n", read);
		printf("%s", line);
	}
    fclose(fptr);

    return 0;
}

