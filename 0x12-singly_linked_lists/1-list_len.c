#include "lists.h"
/**
 * list_len - returns the number of
 * elements in a linked list_t list.
 * @h: pointer to the list.
 * Return: will number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t ethan = 0;

	while (h)
	{
		ethan++;
		h = h->next;
	}
	return (ethan);
}

