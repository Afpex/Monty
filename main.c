#include "monty.h"
#define MAX_LINE_LENGTH 1024

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	FILE *file;
	size_t size = MAX_LINE_LENGTH;
	char *content;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int l_counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	content = (char *)malloc(size * sizeof(char)); 
	while (read_line > 0)
	{
/*		content = (char *)malloc(size * sizeof(char)); */
		if (fgets(content, size, file) == NULL)
		{
			break;
		}
		read_line = strlen(content);
		bus.content = content;
		l_counter++;
		if (read_line > 0)
		{
			execute(content, &stack, l_counter, file);
		}
/*		free(content); */
	}
	free(content); 
	fclose(file);

	free_stack(stack);
	return (0);
}
