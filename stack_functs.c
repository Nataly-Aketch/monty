#include "monty.h"
/**
 *add_dll_node_push - adds a new node and pushes it to the stack
 *@stack: stack
 *@x: value of the node
 *
 *Return: nothing
 */
void add_dll_node_push(stack_t **stack, unsigned int x)
{
	stack_t *new_node;
       
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (0);

	new_node->n = x;
	new_node->next = top;
	new_node->prev = NULL;
	top->prev = new_node;
	top = new_node;
}
/**
 *pall - prints the elements in the stack
 *
 *
 *
 *Return: nothing
 */
void pall()
{
	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
/**
 *
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	char *line;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	fread();
	fgets();
