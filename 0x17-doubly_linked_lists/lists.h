#ifndef _LISTS_
#define _LISTS_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct distint_s - doubly linked list
 * @n: integer
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: doubly linked list node structure for Holberton project
 */
typedef struct distint_s
{
	int n;
	struct distint_s *prev;
	struct distint_s *next;
} distint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);


#endif /* _DOUBLEL_H_ */
