#include "monty.h"
/**
 * div_f - divides the top two elements of stack.
 * @head: top of stack
 * @l_counter: line number
 * Return: no return
 */
void div_f(stack_t **head, unsigned int l_counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", l_counter);
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
	aux = h->next->i / h->i;
	h->next->i = aux;
	*head = h->next;
	free(h);
}
