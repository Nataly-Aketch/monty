#include "monty.h"
/**
 * pint - prints top of stack
 * @stack: linked list
 * @line_number: line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * pop - deletes first node
 * @stack: linked list
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(line);
		exit(EXIT_FAILURE);
	}
	*stack = temp->next;
	free(temp);
}
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int count = list_len(head);
	
	if (count < 3)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	}
}
void add(stack_t **stack, unsigned int line_number);
/**
 * nop - does nothing
 * @stack: linked list
 * @line_number: line number
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
