#include "monty.h"
/**
 * pop_f - prints the head
 * @head: head of the stack
 * @l_counter: line_number
 * Return: no return
 */
void pop_f(stack_t **head, unsigned int l_counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
