#include "monty.h"
/**
 * swap_f - adds the top two elements in a stack.
 * @head: stack head
 * @l_counter: line_number
 * Return: no return
*/
void swap_f(stack_t **head, unsigned int l_counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->i;
	h->i = h->next->i;
	h->next->i = aux;
}
