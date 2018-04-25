#include "monty.h"
/**
  *
  *
  *
  *
  */
int nodecount(stack_t **stack)
{
	int len;
	stack_t *temp;

	len = 0;
	temp = *stack;
	while(temp)
	{
		len++;
		temp = (temp)->next;
	}
	return(len);
}
