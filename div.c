#include "monty.h"
/**
  * div - divides the second top element of the stack by the top element
  * @stack: head of the stack
  * @line_number: line number
  * Return: void
  */
void _div(stack_t **stack, unsigned int line_number)
{
	int len;

	len = nodecount(stack);
	if (len < 2)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= (*stack)->n;

	/*remove top node */
	pop(stack, line_number);
}
