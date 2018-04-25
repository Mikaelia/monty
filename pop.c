#include "monty.h"
/**
  *
  *
  *
  *
  */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || stack == NULL)
	{
		printf("L<line_number>: can't pop an empty stack");
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(temp);
}
