#include "lists.h"
/**
 * get_nodeint_at_index - gets the next node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to return
 * #Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}

