#include "monty.h"
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

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		tmp = NULL;
	}
	free(head);
}
