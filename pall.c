#include "monty.h"

/**
 * pall_f -function that prints the stack
 * @head:stack head
 * @l_counter: number used
 *
 * Return: No return
 */

void pall_f(stack_t **head, unsigned int l_counter)
{
	stack_t *h;
	(void)l_counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->i);
		h = h->next;
	}
}
