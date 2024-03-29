#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list.
 * @head: double pointer to head of list
 * @n: integer to add
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
