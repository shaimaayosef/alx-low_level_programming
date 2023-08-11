#include <stdio.h>

/**
 * main - Entyr point.
 *
 * Return: Always 0(Success).
 */
int main(void)
{
	int a;
	char x;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
