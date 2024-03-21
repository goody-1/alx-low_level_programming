#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
dlistint_t *node_d(dlistint_t *h, dlistint_t *node, unsigned int idx);

/**
 * insert_dnodeint_at_index - insert node at index.
 *
 * @h: double pointer to head of list
 * @idx: index where data will be added
 * @n: data to be inserted in list
 *
 * Return: node at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	size_t len = dlistint_len(*h);
	dlistint_t *temp;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	if (*h == NULL)
	{
		node->next = *h;
		node->prev = NULL;
		*h = node;

		return (*h);
	}
	if ((int) idx < 0 || idx >= len)
		return (NULL);

	/**
	 *  It was necessary to bring out this block of code below
	 * as the head is not correctly modified in the node_d function
	*/
	if (idx == 0)
	{
		temp = *h;
		node->next = temp;
		temp->prev = node;
		node->prev = NULL;
		*h = node;

		return (*h);
	}
	node = node_d(*h, node, idx);

	return (node);
}

/**
 * node_d - insert node at index.
 *
 * @h: pointer to head of list
 * @idx: index where data will be added
 * @node: node to be inserted
 *
 * Return: node inserted
 */
dlistint_t *node_d(dlistint_t *h, dlistint_t *node, unsigned int idx)
{
	unsigned int i = 0;

	while (i < idx)
	{
		if (i == idx - 1)
		{
			node->next = h->next;
			node->prev = h;
			(h->next)->prev = node;
			h->next = node;
			break;
		}
		i++;
		h = h->next;
	}
	return (node);
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
