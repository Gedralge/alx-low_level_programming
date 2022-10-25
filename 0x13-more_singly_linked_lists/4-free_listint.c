#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to first list element.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *gerrol;

	while (head != NULL)
	{
		gerrol = head;
		head = head->next;
		free(gerrol);
	}
}

