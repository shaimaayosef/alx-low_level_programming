#include "hash_tables.h"

/**
 * key_index - key index of the current item
 * @key: key to get the index of.
 * @n: size of the array item of the hash table.
 *
 * Return: index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int n)
{
	return (hash_djb2(key) % n);
}
