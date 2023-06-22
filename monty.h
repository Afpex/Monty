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
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	int i;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
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

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push_f(stack_t **head, unsigned int nmber);
void pall_f(stack_t **head, unsigned int nmber);
void pint_f(stack_t **head, unsigned int nmber);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void pop_f(stack_t **head, unsigned int l_counter);
void swap_f(stack_t **head, unsigned int l_counter);
void add_f(stack_t **head, unsigned int l_counter);
void nop_f(stack_t **head, unsigned int l_counter);
void sub_f(stack_t **head, unsigned int l_counter);
void div_f(stack_t **head, unsigned int l_counter);
void mul_f(stack_t **head, unsigned int l_counter);
void mod_f(stack_t **head, unsigned int l_counter);
void pchar_f(stack_t **head, unsigned int l_counter);
void pstr_f(stack_t **head, unsigned int l_counter);
void rotl_f(stack_t **head, unsigned int l_counter);
void rotr_f(stack_t **head, __attribute__((unused)) unsigned int l_counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void queue_f(stack_t **head, unsigned int l_counter);
void stack_f(stack_t **head, unsigned int l_counter);

#endif
