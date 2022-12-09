#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char moses;


	for (moses = 'a'; moses < 'z'; moses++)
		putchar(moses);


	for (moses = 'A'; moses < 'Z'; moses++)
		putchar(moses);
	putchar('\n');
	return (0);
}
