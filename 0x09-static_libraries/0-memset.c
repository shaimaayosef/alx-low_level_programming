#include "main.h"

/**
 *_memset - Specify a value for a memory block
 * @s: address of memory
 * @b: the asigned value
 * @n: number of bytes
 * Return: array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
