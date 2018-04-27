#include "monty.h"
/**
  * mod - finds remainder of division of  first and second elements of the stack
  * @stack: head of the stack
  * @line_number: line number
  * Return: void
  */
void mod(stack_t **stack, unsigned int line_number)
{
	int len;

	len = nodecount(stack);
	if (len < 2)
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n;

	/*remove top node */
	pop(stack, line_number);
}
