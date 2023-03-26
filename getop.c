#include "monty.h"
/**
 * get_func - function pointer
 * @str: array of opertors
 * Return: function
 */
void (*get_func(char *str))(stack_t**, unsigned int)
{
	instruction_t op[] = {
			{"pall", pall},
			{"push", push},
			{"pint", pint},
			{"pop", pop},
			{"swap", swap},
			{"add", add},
			{"nop", nop},
			{"sub", sub},
			{"div", divide},
			{"mul", mul},
			{"mod", mod},
			{NULL, NULL},
	};
	int i = 0;

	for (; op[i].opcode; i++)
	{
		if (strcmp(op[i].opcode, str) == 0)
			return (op[i].f);
	}
	return (0);
}
/**
 * check - check is command exists
 * @str: command to check
 * Return: -1 if not found 0 if found
 */
int check(char *str)
{

	if (strstr(str, "#"))
		return (1);
	else if ((strcmp("push", str) != 0) && (strcmp("pall", str) != 0) &&
	(strcmp("pint", str) != 0) && (strcmp("pop", str) != 0) &&
	(strcmp("swap", str) != 0) && (strcmp("add", str) != 0) &&
	(strcmp("nop", str) != 0) && strcmp("sub", str) != 0 &&
	strcmp("div", str) != 0 && strcmp("mul", str) != 0 && strcmp("mod", str) != 0)
		return (-1);
	return (0);
}
