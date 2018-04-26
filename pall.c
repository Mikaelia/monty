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
