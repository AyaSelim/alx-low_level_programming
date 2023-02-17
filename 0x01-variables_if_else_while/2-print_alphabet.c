#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
		char start = 'a';

		while (start <= 'z')
		{
		putchar(start);
		start++;
		}
		putchar('\n');
		return (0);
}
