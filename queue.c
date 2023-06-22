#include "monty.h"
/**
 * queue_f - prints the top
 * @head: top of the stack
 * @l_counter: line_number
 * Return: no return
 */
void queue_f(stack_t **head, unsigned int l_counter)
{
	(void)head;
	(void)l_counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @i: new_value
 * @head: top of the stack
 * Return: no return
 */
void addqueue(stack_t **head, int i)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->i = i;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
