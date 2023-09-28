#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: head of the list
 * @n: integer value of the new node
 *
 * Return: the address of the new element, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node with the provided data */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Find the current last node in the list */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* Append the new node to the end of the list */
	current->next = new_node;

	return (new_node);
}
