#include<stdio.h>
/**
 * main- prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return:0 if success
 */
int main(void)
{

	int n;
	char cha;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
