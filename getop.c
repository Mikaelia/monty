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
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"swap", swap},
		{"nop", nop}
	};

	i = 0;
	while (ops[i].opcode != NULL)
	{
		if (strcmp(args[0], (ops[i].opcode)) == 0)
			return (ops[i].f);
		i++;
	}
	printf("L<>: unknown instruction %s\n", args[0]);
	exit(0);
}
