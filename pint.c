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
		printf("L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("PINT: %d\n", (*stack)->n);
	return;
}
