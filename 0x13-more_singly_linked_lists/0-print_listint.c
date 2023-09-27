#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: head of a list.
 * Return: number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
