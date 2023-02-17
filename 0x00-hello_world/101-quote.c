#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 1
 *
 */
int main(void)
{
	const char str[] = " and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const unsigned int len = sizeof(str) - 1;
	const int fd = 2;
	write(fd, str, len);

	return (1);
}
