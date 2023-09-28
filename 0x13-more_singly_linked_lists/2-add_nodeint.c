#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: pointer to a pointer to the head of the linked list
 * @n: integer value to be added to the new node
 *
 * Retuen: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
