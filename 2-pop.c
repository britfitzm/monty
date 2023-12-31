#include "monty.h"

bus_t bus;

/**
* b_pop - function that prints the top of stack
* @head: double head pointer to stack
* @counter: line count
* Return: nothing
*/

void b_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
