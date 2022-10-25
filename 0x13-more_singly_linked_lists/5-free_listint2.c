#include "lists.h"
/**
 * free_listint2 - frees a listint_t lits.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Description: sets the head to Null.
 */
void free_listint2(listint_t **head)
{
	listint_t *gerrol;

	if (head == NULL)
		return;

	while (*head)
	{
		gerrol = (*head)->next;
		free(*head);
		*head = gerrol;
	}

	head = NULL;
}

