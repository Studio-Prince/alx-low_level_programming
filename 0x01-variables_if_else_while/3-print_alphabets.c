#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char moses = 'a';
	char moses1 = 'A';

	for (moses = 'a'; moses < 'z'; moses++)
		putchar(moses);


	for (moses1 = 'A'; moses1 < 'Z'; moses1++)
		putchar(moses1);
	putchar('\n');
	return (0);
}
