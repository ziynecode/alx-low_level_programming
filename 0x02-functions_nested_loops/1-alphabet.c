#include "main.h"

/**
 * print_alphabet - make the alphabet in lowercase, followed by a new line.
 * return: void
 */
void print_alphabet(void)
{
	char (c);

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
