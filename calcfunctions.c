#include "monty.h"
/**
  * _div - divides the second top element of the stack by the top element
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
/**
  * add - adds the first two elements of the stack, returns single node
  * @stack: head of the stack
  * @line_number: line number
  * Return: void
  */
void add(stack_t **stack, unsigned int line_number)
{
	int len;

	len = nodecount(stack);
	if (len < 2)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;

	/*remove top node */
	pop(stack, line_number);
}
/**
  * sub - subtracts the first element from second, returns single node
  * @stack: head of the stack
  * @line_number: line number
  * Return: void
  */
void sub(stack_t **stack, unsigned int line_number)
{
	int len;

	len = nodecount(stack);
	if (len < 2)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;

	/*remove top node */
	pop(stack, line_number);
}
/**
  * mod - finds remainder of division of first, second elements of the stack
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
