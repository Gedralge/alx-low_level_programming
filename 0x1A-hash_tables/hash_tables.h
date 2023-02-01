#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of the hash table
 *
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: Apointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * dtruct hash_table_s Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each call hashof this array is a pointer to the first
 * node of a linked list, because we want our HashTable to use
 * a changing collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* prototypes */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
#endif /* _HASH_TABLES_H */
