#include <stdio.h>
/**
 * main-prints the alphabet in lowercase except for 'q' and 'e'
 * Return:0 if success
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
