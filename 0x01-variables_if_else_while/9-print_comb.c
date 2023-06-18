#include<stdio.h>
/**
 * main- prints all possible combinations of single-digit numbers
 * Return: (0) if success
 */

int main(void)
	int n;
	char cha;

	for (n = 0; n < 10; n++)
{
	putchar(n + '0');
	if(n !=9)
	{
		putchar(',');
		putchar(' ');
	}

}
putvhar('/n');
return (0);
}
