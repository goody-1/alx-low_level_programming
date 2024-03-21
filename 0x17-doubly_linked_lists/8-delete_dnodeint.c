#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
dlistint_t *node_delete(dlistint_t *h, unsigned int idx);

/**
 * insert_dnodeint_at_index - insert node at index.
 *
 * @h: double pointer to head of list
 * @idx: index where data will be added
 * @n: data to be inserted in list
 *
 * Return: node at index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = dlistint_len(*head);

	if ((int) index < 0 || index >= len)
		return (0);

	return (1);
}

dlistint_t *node_delete(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (i == index - 1)
		{
			(head)->next = (head)->next->next;
			((head)->next->next)->prev = (head);
			break;
		}
		i++;
		(head) = (head)->next;
	}
}

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 *
 * @h: pointer to integer
 *
 * Return: the number of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
