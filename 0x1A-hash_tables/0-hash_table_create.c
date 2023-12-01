#include "hash_tables.h"

/**
 * hash_table_create - Creating hash table.
 * @n: size of the array.
 *
 * Return: If an error occurs - NULL.
 *         else - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int n)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->n = n;
	ht->array = malloc(sizeof(hash_node_t *) * n);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ht->array[i] = NULL;

	return (ht);
}
