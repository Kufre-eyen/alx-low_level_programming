#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 * return: 0
 */
void print_alphabet_x10(void)
{
	char h;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			_putchar(h);
		}
		_putchar('\n');
	}
}
