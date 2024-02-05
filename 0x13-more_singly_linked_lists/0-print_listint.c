#include "lists.h"

/**
 * print_listint - prints singly linked list
 * @h: pointer to head of list
 *
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{
	size_t h_len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h_len++;
		h = h->next;
	}

	return (h_len);
}
