#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
