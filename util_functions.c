#include "monty.h"
/**
  * free2pointer - frees a double pointer
  * @tokens: pointer to tokens
  * Return: void
  */
void free2pointer(char **tokens)
{
	int i;

	for (i = 0; tokens[i] != NULL; i++)
	{
		free(tokens[i]);
	}
	free(tokens);
}
/**
  * freestack - frees a stack
  * @head: head of stack
  *
  * Return: void
  */
void freestack(stack_t *head)
{
	stack_t *tmp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		tmp = NULL;
	}
	free(head);
}
/**
  * nodecount - counts number of elements in stack
  * @stack: head of stack
  *
  * Return: length of stack
  */
int nodecount(stack_t **stack)
{
	int len;
	stack_t *temp;

	len = 0;
	temp = *stack;
	while (temp)
	{
		len++;
		temp = (temp)->next;
	}
	return (len);
}
