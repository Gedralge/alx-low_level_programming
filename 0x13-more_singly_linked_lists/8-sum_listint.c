#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: if the list is empty - 0.
 * otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

