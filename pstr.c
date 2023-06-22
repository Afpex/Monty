#include "monty.h"

/**
 * pstr_f - prints the string beginning with the 
 * one at the top of the stack,followed by a new line
 * @head: stack top
 * @l_counter: line number
 * Return: no return
 */
void pstr_f(stack_t **head, unsigned int l_counter)
{
	stack_t *h;
	(void)l_counter;

	h = *head;
	while (h)
	{
		if (h->i > 127 || h->i <= 0)
		{
			break;
		}
		printf("%c", h->i);
		h = h->next;
	}
	printf("\n");
}
