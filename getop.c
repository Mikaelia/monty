#include "monty.h"
/**
  * getop - function pointer that gets function from opcode
  * @args: tokenized arguments from input line
  * @l: line number
  *
  * Return: provides operator function
  */
void (*getop(char **args, unsigned int l))(stack_t **stack, unsigned int l)
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
		{"mul", mul},
		{"mod", mod},
		{"div", _div},
		{"nop", nop},
		{"pchar", pchar},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].opcode != NULL)
	{
		if (strcmp(args[0], (ops[i].opcode)) == 0)
			return (ops[i].f);
		i++;
	}
	printf("L%d: unknown instruction %s\n", l, args[0]);
	free(args);
	exit(EXIT_FAILURE);
}
