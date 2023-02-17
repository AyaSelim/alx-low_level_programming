#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
if (n > 0)
	printf("%i %s", n, "is positive\n");
else if (n < 0)
	printf("%i %s", n, "is negative\n");
else
	printf("%i %s", n, "is zero\n");
return (0);
}
