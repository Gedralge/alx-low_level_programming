#include "lists.h"
/**
 * listint_len - returns the number
 * of elements ina linked list_t list.
 * @h: pointer to the first element on list.
 * Return: number of elements in list.
 */
size_t listint_len(const listint_t *h)
{
	int gerrol;

	gerrol = 0;
	while (h != NULL)
	{
		h = h->next;
		gerrol++;
	}

	return (gerrol);
}

