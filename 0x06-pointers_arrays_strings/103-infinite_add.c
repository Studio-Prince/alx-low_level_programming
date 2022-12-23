#include "main.h"
 /** infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: size of buffer
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{

	int sum, res, first, second, i = 0, plusOne = 0;

	int len1 = _strlen(n1), len2 = _strlen(n2);

	char *ptr = r;



	while (len1 > 0 || len2 > 0)

	{

		first = len1 > 0 ? (*(n1 + len1 - 1) - '0') : 0;

		second = len2 > 0 ? (*(n2 + len2 - 1) - '0') : 0;

		sum = first + second;

		res = returnRes(sum, plusOne);

		plusOne = returnPlusOne(sum, plusOne);

		*(ptr + i) = res + '0';

		len1--;

		len2--;

		i++;

	}

	if (plusOne)

		*(ptr + i) = 1 + '0';

	ptr[++i] = '\0';
	rev_string(ptr);
	return ((size_r > _strlen(ptr)) ? ptr : 0);
}
