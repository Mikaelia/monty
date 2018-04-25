#include "monty.h"
/**
  *
  *
  *
  *
  */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L<line_number>: can't pint, stack empty");
		exit(EXIT_FAILURE);
	}
	printf("PINT: %d\n", (*stack)->n);
	exit(0);
}
