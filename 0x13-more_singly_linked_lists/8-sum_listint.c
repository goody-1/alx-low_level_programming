#include "lists.h"

/**
 * sum_listint - a function that returns the
 * sum of all the data (n) of a listint_t linked list
 *
 * @head: starting node
 *
 * Return: sum of elements in the list or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = head->n;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (head->next != NULL)
		{
			head->next->n += head->n;
			sum  = head->next->n;
		}

		head = head->next;
	}


	return (sum);
}
