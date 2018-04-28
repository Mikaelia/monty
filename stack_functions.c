#include "monty.h"
/**
  * pint - prints the first element of the stack
  * @stack: head of stack
  * @line_number: line number
  *
  * Return: void
  */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
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
/**
  * push - pushes element to top of stack
  * @stack: pointer to head of stack
  * @line_number: line number
  *
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
	if (globaln == NULL || atoi(globaln) == 0)
	{
		if (strcmp(globaln, "0") != 0)
		{
			printf("L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
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
/**
  * nop - does nothing
  * @stack: top of stack
  * @line_number: line number
  *
  * Return: void
  */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
