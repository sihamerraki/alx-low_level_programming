#include <stdio.h>
/**
 * main- Prints the alphabet in lowercase
 * Return:0if success 
 */
int main(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
return (0);
}
