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
			{NULL, NULL},
	};
	int i = 0;

	while (op[i].opcode)
	{
		if (strcmp(str, op[i].opcode) == 0)
			return (op[i].f);
		i++;
	}
	return (0);
}
