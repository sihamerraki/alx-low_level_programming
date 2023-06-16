#include<stdio.h>
#include<time.h>
#include<stdio.h>

/**
 * main- decide if the number positive, zero or negative.
 *
 * Return: 0 if success
 */
int main()
{
	int n;
	srand(time(0));
	n = rand();
	if (n>0){
	printf("%d is positive\n", n);
	}
	else if (n=0){
		printf("%d zero/n",n);}
	else if (n<0){
		printf("%d is négative\n",n);
	}
	return(0);
}

