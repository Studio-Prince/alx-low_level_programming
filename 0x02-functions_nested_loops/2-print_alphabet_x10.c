#include "main.h"
/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*
*/
void print_alphabet_x10(void)
{
	char i;

	for (i = 0; i < 9; i++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}
}
