#include "monty.h"
/**
  * swap - swaps first two elements of stack
  * @stack: head of stack
  * @line_number: line number
  *
  * Return: void
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

	tmp1->next = tmp2->next;
	tmp1->prev = tmp2;
	tmp2->prev = NULL;
	tmp2->next = tmp1;
	if (tmp1->next)
		tmp1->next->prev = tmp1;
	*stack = tmp2;
}
