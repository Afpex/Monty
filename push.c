#include "monty.h"
/**
 * push_f - adds a node to the stack
 * @head: stack head
 * @l_counter: line_number
 *
 * Return: no return
 */

void push_f(stack_t **head, unsigned int l_counter)
{
	int i, p = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			p++;
		for (; bus.arg[p] != '\0'; p++)
		{
			if (bus.arg[p] > 57 || bus.arg[p] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", l_counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", l_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
