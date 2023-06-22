#include "monty.h"

/**
 * pchar_f - prints the char at the stack head,
 * followed by a new line
 * @head: stack head
 * @l_counter: line number
 * Return: no return
 */
void pchar_f(stack_t **head, unsigned int l_counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->i > 127 || h->i < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->i);
}
