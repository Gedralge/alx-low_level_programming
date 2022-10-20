#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t riley;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (riley = 0; str[riley]; riley++)
		;
	new->len = riley;
	new->next = *head;
	*head = new;
	return (*head);
}

