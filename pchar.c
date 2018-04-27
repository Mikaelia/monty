#include "monty.h"
/**
  * pchar - prints the char at the top of the stack
  * @stack: head of stack
  * @line_number: line number
  *
  * Return: void
  */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 126)
	{
		printf("L%d: can't pchar, value out of range", line_number);
		exit(EXIT_FAILURE);
	}
		putchar((*stack)->n);
		printf("\n");
}
