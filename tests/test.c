#include "monty.h"
int main(void)
{
	stack_t *head;
	unsigned int n;

	head = NULL;
	push(&head, n = 1);
	push(&head, n = 2);
	push(&head, n = 3);
	pall(&head, n);
	swap(&head, n);
	pall(&head, n);
	pint(&head, n);
	add(&head, n);
	pall(&head, n);

}
