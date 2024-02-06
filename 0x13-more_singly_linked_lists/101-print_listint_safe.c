#include "lists.h"

/**
 * print_listint_safe - prints singly linked list
 * @head: pointer to head of list
 *
 * Return: length of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t h_len = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		h_len++;

		/* Move slow pointer one step forward */
		slow = slow->next;

		/*  Move fast pointer two steps forward */
		fast = fast->next->next;

		/* If slow and fast pointers meet, it indicates a loop */
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)fast, fast->n);
			return (h_len);
		}
	}

	/* If fast reaches the end of the list, no loop is detected */
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		h_len++;
		slow = slow->next;
	}

	return (h_len);
}
