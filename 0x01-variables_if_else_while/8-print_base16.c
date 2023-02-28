#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
