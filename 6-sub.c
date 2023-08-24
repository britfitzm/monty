#include "monty.h"

bus_t bus;

/**
* b_sub - function that substracts nodes
* @head: double head pointer to stack
* @counter: line count
* Return: nothing
*/

void b_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sub, nd;

	temp = *head;
	for (nd = 0; temp != NULL; nd++)
		temp = temp->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}
