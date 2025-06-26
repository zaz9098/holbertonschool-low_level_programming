#include "main.h"
/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i <= 14)
		{
			if (i >= 10)
				_putchar(1 + '0');
			_putchar(i % 10 + '0');
			++i;
		}

		_putchar(\'n');
		j++;
		i = 0;
	}
}
