#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: pointer to head of list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t h_len = 0;

	while (h != NULL)
	{
		h_len++;
		h = h->next;
	}
	return (h_len);
}
