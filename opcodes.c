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
/**
 * swap - swap top two elements in the list
 * @stack: linked list implementation of stack
 * @line_number: line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *sec/* = head->next*/;
	int count = list_len(head), temp;

	if (count < 3)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sec = head->next;
	temp = head->n;
	head->n = sec->n;
	sec->n = temp;
}
/**
 * add - ads top two elements
 * @stack: linked list implementatiopn of stack
 * @line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *sec;
	int result, count = list_len(*stack);

	if (count <= 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sec = (*stack)->next;
	result = head->n + sec->n;
	sec->n = result;
	*stack = sec;
	free(head);
}
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
