#include "monty.h"

/**
 * pint_f - prints the top
 * @head: stack top
 * @l_counter: number
 * Return: no return
*/
void pint_f(stack_t **head, unsigned int l_counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->i);
}
