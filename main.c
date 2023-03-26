#include "monty.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	stack_t *head = NULL;
	FILE *fd = fopen(argv[1], "r");
	int len;
	char **av, *line_cpy = malloc(100);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line = malloc(100);
	while (fgets(line, 500, fd))
	{
		strcpy(line_cpy, line);
		av = lexer(line_cpy);
		len = list_len(head);
		if (!av[0])
			continue;
		if (check(av[0]) == 1)
			continue;
		if (check(av[0]) == -1)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", len, av[0]);
			exit(EXIT_FAILURE);
		}
		(*get_func(av[0]))(&head, len);
		free(av);
	}
	free(line_cpy);
	free(line);
	free_list(head);
	fclose(fd);
	return (EXIT_SUCCESS);
}
/**
 * push - push elements onto stack
 * @stack: linked list implementation of stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	char **av;
	int data;

	av = lexer(line);
	if ((av[1] == NULL || _isdigit(av[1]) != 0))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(av[0]);
		free(av);
		exit(EXIT_FAILURE);
	}
	data = atoi(av[1]);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_list(new_node);
		exit(EXIT_FAILURE);
	}
	new_node->n = data;
	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
	free(av);
}
/**
 * pall - prints a stack
 * @stack: linked list
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	print_l(*stack);
}
