#include "monty.h"
/**
  *
  *
  *
  *
  */
void add(stack_t **stack, unsigned int line_number)
{
	int len;

	len = nodecount(stack);
	if (len < 2)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;

	/*remove top node */
	pop(stack, line_number);
}
