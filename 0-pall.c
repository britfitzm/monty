#include "monty.h"

bus_t bus;

/**
* b_pall - function that prints everything in stack
* @head: double head pointer to stack
* @counter: unused line count
* Return: nothing
*/

void b_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
