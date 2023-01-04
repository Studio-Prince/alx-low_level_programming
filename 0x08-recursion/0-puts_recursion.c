#include "main.h"

void _puts_recursion(char *s)
{ 
	if(*s ! == '\0')
	{
		_puts(*s)
		_puts_recursion(s + 1)
	}
	else 
		_puts('\n')
