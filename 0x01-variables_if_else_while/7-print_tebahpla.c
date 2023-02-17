#include <stdio.h>

/**
 * main - Entry point. Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

