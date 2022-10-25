#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: if linked list is empty - 0.
 * otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *gedral;
	int gerrol;

	if (*head == NULL)
		return (0);
	gedral = *head;
	gerrol = (*head)->n;
	*head = (*head)->next;

	free(gedral);

	return (gerrol);
}

