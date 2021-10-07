#include "lists.h"

/**
 * print_list - a function that prints all elements of a list_t list
 *
 * Description: If str is NULL, print [0] (nil)
 * - printf is allowed
 *
 * @h: pointer to list_t type
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;

	}

	return (i);

}