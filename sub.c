#include "monty.h"
/**
 *sub_f - subtraction
 *@head: top of the stack
 *@l_counter: number of a line
 *Return: no return
 */
void sub_f(stack_t **head, unsigned int l_counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->i - aux->i;
	aux->next->i = sus;
	*head = aux->next;
	free(aux);
}
