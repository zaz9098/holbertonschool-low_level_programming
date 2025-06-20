#include "main.h"

/**
 * _islower - Check code
 * @c: @c: The character to be checked
 * Description: function uses _putchar function to print
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
