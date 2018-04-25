#include "monty.h"
/**
  *
  *
  *
  *
  */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;
	stack_t *tmp2;

	int len;

	len = nodecount(stack);
	if (len < 2)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp1 = *stack;
	tmp2 = (*stack)->next;

	tmp1->next = tmp1->next->next;
	tmp1->prev = tmp2;
	tmp2->prev = NULL;
	tmp2->next = tmp1;
	tmp1->next->prev = tmp1;
	*stack = tmp2;
}
