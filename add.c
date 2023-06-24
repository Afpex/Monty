#include "monty.h"

/**
 * add_f - adds the top two elements in the stack.
 * @head: top of the stack
 * @l_counter: number of a line
 * Return: no return
 */
bus_t bus;

void add_f(stack_t **head, unsigned int l_counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->i + h->next->i;
	h->next->i = aux;
	*head = h->next;
	free(h);
}
