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
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(temp);
}
