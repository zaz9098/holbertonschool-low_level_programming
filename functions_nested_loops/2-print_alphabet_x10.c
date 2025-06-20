#include "main.h"
/**
 * print_alphabet_x10 - Check code
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char i;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (i = 'a'; i  <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
