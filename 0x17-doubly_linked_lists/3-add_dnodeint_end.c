#include "lists.h"

/**
 * add_dnodeint_end - unction that adds a new node at the
 * end of a dlistint_t lis
 *
 * @head: double pointer to head
 * @n: const integer data
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;

		last->next = new_node;
		new_node->prev = last;
	}

	return (new_node);
}
