#include "monty.h"
/**
 * mod_f - calculates the other division of the second
 * top element of the stack by the top element of the stack
 * @head: stack top
 * @l_counter: line number
 * Return: no return
 */
void mod_f(stack_t **head, unsigned int l_counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->i == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->i % h->i;
	h->next->i = aux;
	*head = h->next;
	free(h);
}
