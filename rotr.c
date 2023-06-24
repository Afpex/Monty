#include "monty.h"

/**
 *rotr_f - rotates the stack to the bottom
 *@head: stack head
 *@l_counter: line number
 *Return: no return
 */
void rotr_f(stack_t **head, __attribute__((unused)) unsigned int l_counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
