#include "monty.h"
/**
  * pall - prints all of the elements of the stack
  * @stack: head of the stack
  * @line_number: line number
  *
  * Return: void
  */
void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *temp;

	if (!stack)
	{
		return;
	}
	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
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
		printf("L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
		putchar((*stack)->n);
		printf("\n");
}
