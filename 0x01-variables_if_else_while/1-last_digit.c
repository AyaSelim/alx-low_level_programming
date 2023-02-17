#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		int mod = n % 10;

		if (mod > 5)
			printf("Last digit of %i is %i and is greater than 5\n", n, mod);
		else if (mod == 0)
			printf("Last digit of %i is %i and is 0\n", n, mod);
		else
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, mod);

		return (0);
}
