#include "main.h"

/**
 * print_last_ digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)

		ld *= -1;

	_putchar(ld + '1');

	return (0);
}
