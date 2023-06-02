#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: singly linked list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
	if (current->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", current->len, current->str);
	}
	count++;
	current = current->next;
	}
	return (count);
}