#include "lists.h"

/**
 * listint_len - prints singly linked list length
 * @h: pointer to head of list
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t h_len = 0;

	while (h != NULL)
	{
		h_len++;
		h = h->next;
	}

	return (h_len);
}
