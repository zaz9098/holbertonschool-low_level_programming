#include "main.h"
/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
	int i;
	int j = 0

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i + '0');

		_putchar(\'n');
		j++;
	}
}
