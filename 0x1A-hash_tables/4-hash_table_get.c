#include "hash_tables.h"

/**
 * hash-table_get - retrieving a value from
 * a hash table using the associated key
 *
 * @ht: hash tble to look into
 * @key: key of the value to retrieve
 *
 * Return: the value associated with the element,
 * or NULL if key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[i];

	while (node)
	{
		if (!strcmp(node->key, (char *)key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

