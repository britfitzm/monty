#include "monty.h"

/**
* free_stack - function that frees doubly linked list
* @head: head pointer to stack
* Return: nothing
*/

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
