#include "monty.h"
/**
  * mul- multiplies the first and second elements of the stack
  * @stack: head of the stack
  * @line_number: line number
  * Return: void
  */
void mul(stack_t **stack, unsigned int line_number)
{
	int len;

	len = nodecount(stack);
	if (len < 2)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;

	/*remove top node */
	pop(stack, line_number);
}
