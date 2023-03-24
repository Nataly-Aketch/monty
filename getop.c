#include "monty.h"
/**
 * get_func - function pointer
 * @str: array of opertors
 * Return: function
 */
void (*get_func(char *str))(stack_t**, unsigned int)
{
	stack_t *stack = NULL;
	instruction_t op[] = {
			{"pall", pall},
			{"push", push},
			{"pint", pint},
			{"pop", pop},
			{"nop", nop},
			{NULL, NULL},
	};
	int i = 0;
	unsigned int line_no = list_len(stack);

	for (; op[i].opcode; i++)
	{
		if (strcmp(op[i].opcode, str) == 0)
			return (op[i].f);
	}
	if ((strcmp("push", str) != 0) && (strcmp("pall", str) != 0) &&
	(strcmp("pint", str) != 0) && (strcmp("pop", str) != 0) &&
	(strcmp("swap", str) != 0) && (strcmp("add", str) != 0) &&
	(strcmp("nop", str) != 0))
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_no, str);
		free(str);
		free(line);
		exit(EXIT_FAILURE);
	}
	return (0);
}
