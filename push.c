#include "monty.h"
/**
  * push - pushes element to top of stack
  * @stack: pointer to head of stack
  * @line_number: line number of operation
  * Return: void
  */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (!stack)
	{
		printf("no head");
		return;
	}
	if (globaln == NULL)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		printf("malloc error");
		return;
	}
	new->n = atoi(globaln);
	if (!*stack)
		new->next = NULL;
	else
	{
		(*stack)->prev = new;
		new->next = *stack;
	}
	new->prev = NULL;
	*stack = new;
}
