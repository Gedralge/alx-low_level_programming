#include "lists.h"

/**
 * dlistint_len - find the number of nodes in a doubly linked list
 * @h: head pointer to linked list
 * Return: numbeer of nodes in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;

	for (count = 0; tmp; count++, tmp = tmp->next)
		;

	return (count);
}

