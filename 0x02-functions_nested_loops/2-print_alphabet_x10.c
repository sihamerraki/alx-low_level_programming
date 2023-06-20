#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 * Return:void
 */
void print_alphabet_x10(void)
{
	char k;
	int p;
	p = 0;
	while (p < 10)
	{
		for(k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
		p++;
	}
}

