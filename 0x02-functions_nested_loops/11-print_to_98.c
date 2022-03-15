#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n: starting value
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n >= 98)
				printf(", ");
		}
	}

	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n <= 98)
				printf(", ");
		}
	}

	else if (n == 98)
		printf("%d", n);

	printf("\n");
}
