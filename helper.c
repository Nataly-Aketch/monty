#include "monty.h"
/**
 * print_l - prints a linked list
 * @h: head node
 */
void print_l(stack_t *h)
{
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
/**
 * _isdigit - checks if number is a digit
 * @c: character to be checked
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= '0' && /*c[i] == '1' && c[i] == '2' && c[i] == '3' && c[i] == '4'
		&& c[i] == '5' && c[i] == '6' && c[i] == '7' && c[i] == '8' && */c[i] <= '9')
			return (1);
		i++;
	}/*
	if (c >= '0' && c <= '9')
		return 1;
	*/return (0);
}
/**
 * lexer - tokenize string
 * @str: string to be tokenized
 * Return: array of tokenized strings
 */
char **lexer(char *str)
{
	char **av = malloc(sizeof(char *) * 100);
	int i = 0;
	char *token;

	token = strtok(str, " \t\r\n");
	while (token)
	{
		av[i] = token;
		i++;
		token = strtok(NULL, " \t\r\n");
	}
	av[i] = NULL;
	return (av);
}
/**
 * list_len - count elements in a list
 * @h: head node
 * Return: number of elements
 */
int list_len(stack_t *h)
{
	int count = 1;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
/**
 * free_list - frees a linked list
 * @head: head node
 */
void free_list(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
