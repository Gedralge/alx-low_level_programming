#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert to the new node
 * Return: the address pf the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (trmp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}

