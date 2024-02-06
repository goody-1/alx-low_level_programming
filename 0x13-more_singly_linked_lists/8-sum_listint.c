#include "lists.h"

/**
 * sum_listint - sums the data in the list
 * @head: pointer to head of list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		printf("Not head\n");
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
