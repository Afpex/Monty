#include "monty.h"
/**
 * mul_f - multiplies the two elements top of the stack.
 * @head: stack top
 * @l_counter: number of line
 * Return: no return
 */
void mul_f(stack_t **head, unsigned int l_counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->i * h->i;
	h->next->i = aux;
	*head = h->next;
	free(h);
}
