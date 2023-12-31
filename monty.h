#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @b: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*b)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct bus_s - variables -args, file, line content
* @arg: value
* @file: pointer to monty file
* @content: line content
* @lifi: flag change stack <-> queue
*
* Description: carries values through the program
*/
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

void b_push(stack_t **head, unsigned int counter);
void b_pall(stack_t **head, unsigned int counter);
void b_pint(stack_t **head, unsigned int counter);
void free_stack(stack_t *head);
void b_pop(stack_t **head, unsigned int counter);
void b_swap(stack_t **head, unsigned int counter);
void b_add(stack_t **head, unsigned int counter);
void b_nop(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void b_sub(stack_t **head, unsigned int counter);
void b_div(stack_t **head, unsigned int counter);
void b_mul(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif
