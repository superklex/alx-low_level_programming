#include <stdio.h>

/**
 * main - Will print the numbers from 0 to 9
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for
		(i = 0;
		 i < 10;
		 i++)
	{
		printf("%d", num[i]);
	}
	printf("\n");
	return (0);
}
