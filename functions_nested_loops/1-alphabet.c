#include "main.h"
/**
* main - Entry point
* Description : prints the word _putchar followed by a new line
* Return: Always 0 (Success)
*/
void print_alphabet(void)
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	
	return (0);

}
