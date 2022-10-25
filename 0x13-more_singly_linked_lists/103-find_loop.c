#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.t
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *new = head;

	if (!head)
		return (NULL);

	while (temp && new && new->next)
	{
		new = new->next->next;
		temp = new->next;
		if (new == temp)
		{
			temp = head;
			while (temp != new)
			{
				temp = temp->next;
				new = new->next;
			}
			return (new);
		}
	}
	return (NULL);
}

