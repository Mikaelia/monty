#include "monty.h"
/**
  * getop - function pointer that gets function from opcode
  * @args: tokenized arguments from input line
  * @line_number: line number
  *
  * Return: provides operator function
  */
void (*getop(char **args, unsigned int line_number))(stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"swap", swap},
		{"sub", sub},
		{"nop", nop},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].opcode != NULL)
	{
		if (strcmp(args[0], (ops[i].opcode)) == 0)
			return (ops[i].f);
		i++;
	}
	printf("L%d: unknown instruction %s\n", line_number, args[0]);
	free(args);
	exit(EXIT_FAILURE);
}
