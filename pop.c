#include "monty.h"
/**
  * pop - removes first element from the stack
  * @stack: head of the stack
  * @line_number: line number
  *
  * Return: void
  */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		temp = *stack;
		(*stack)->next->prev = NULL;
		*stack = (*stack)->next;
		free(temp);
	}
}
