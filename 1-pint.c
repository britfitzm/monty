#include "monty.h"

bus_t bus;

/**
* b_pint - function that prints the top of stack
* @head: double head pointer to stack
* @counter: line count
* Return: nothing
*/

void b_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
