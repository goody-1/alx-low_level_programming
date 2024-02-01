#include "lists.h"

/**
 * print_list - prints singly linked list
 * @h: pointer to head of list
 *
 * Return: length of list
 */
size_t print_list(const list_t *h)
{
	size_t h_len = 0;

	while (h != NULL)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h_len++;
		h = h->next;
	}

	return (h_len);
}
