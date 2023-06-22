#include "monty.h"

/**
 *rotl_f - rotates stack to the head
 *@head: head of stack
 *@l_counter: line number
 *Return: no return
 */
void rotl_f(stack_t **head,  __attribute__((unused)) unsigned int l_counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
