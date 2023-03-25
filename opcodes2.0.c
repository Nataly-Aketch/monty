#include "monty.h"
/**
 * sub - subtracts second element from head
 * @stack: linked list implementation of stack
 * @line_number: line number
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *sec;
	int result, count = list_len(*stack);

	if (count <= 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sec = (*stack)->next;
	result = sec->n - head->n;
	sec->n = result;
	*stack = sec;
	free(head);
}
/**
 * mul - multiples second node by first
 * @stack: linked list implementation of stack
 * @line_number: line number
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *sec;
	int result, count = list_len(*stack);

	if (count <= 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sec = (*stack)->next;
	result = sec->n * head->n;
	sec->n = result;
	*stack = sec;
	free(head);
}
/**
 * divide - divides second node by head
 * @stack: linked list implementation of stack
 * @line_number: line number
 */
void divide(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *sec;
	int result, count = list_len(*stack);

	if (count <= 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sec = (*stack)->next;
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = sec->n / head->n;
	sec->n = result;
	*stack = sec;
	free(head);
}
/**
 * mod - modulus
 * @stack: linked list implementation of stack
 * @line_number: line number
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *sec;
	int result, count = list_len(*stack);

	if (count <= 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sec = (*stack)->next;
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = sec->n % head->n;
	sec->n = result;
	*stack = sec;
	free(head);
}
