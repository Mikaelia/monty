#include "monty.h"
/**
  * getop - gets function from opcode
  *
  */
void (*getop(char **args))
{
	int i;
	instruction_t ops[] = {
		{"push", push}
	};

	i = 0;
	while (ops[i].opcode != NULL)
	{
		if (strcmp(args[0], (ops[i].opcode)) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	return (0);
}
