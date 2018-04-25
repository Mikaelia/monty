#include "monty.h"
/**
  * getop - gets function from opcode
  *
  */
void (*getop(char **args))(stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
	};

	i = 0;
	while (ops[i].opcode != NULL)
	{
		if (strcmp(args[0], (ops[i].opcode)) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(0);
}
