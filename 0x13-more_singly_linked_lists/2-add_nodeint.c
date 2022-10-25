#include "lists.h"
/**
 * add-nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to pointer of first element
 * @n: elements to be added.
 * Return: address of new element or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *gerrol;

	gerrol = malloc(sizeof(listint_t));
	if (gerrol == NULL)
		return (NULL);

	gerrol->next = *head;
	gerrol->n = n;

	*head = gerrol;

	return (*head);
}

