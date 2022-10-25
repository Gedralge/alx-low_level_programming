#include "lists.h"
/**
 * reverse_listint - reverses a listint_t.
 * @head: pointer to pointer of first list element.
 *
 * Return: pointer to the first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *current;

	tmp = NULL;
	current = NULL;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		current->next = tmp;
		tmp = current;
	}
	*head = current;

	return (*head);
}

