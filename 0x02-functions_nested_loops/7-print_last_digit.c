#include "main.h"

/**
 * print_last_ digit - prints the last digit of a number
 * @n: the number
 * Return: value of the last digit
 */

int prints_last_digitof a number(int n)
{

	int ld = n % 10;
	{

	if (ld < 0)

		ld *= -1;

	_putchar(ld + '0');

	return (ld);
	}
}
