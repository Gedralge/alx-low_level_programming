#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the pointer to the start of
 * list to free
 * Return: size of free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int count;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		count = *h - (*h)->next;
		if (count > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

