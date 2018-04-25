#include "monty.h"
/**
  *
  *
  *
  */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (!stack)
	{
		printf("no head");
		return;
	}
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		printf("malloc error");
		return;
	}
	new->n = line_number;
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
