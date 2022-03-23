#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to concatenates in second
 * @src: string to put first
 * @n: number of bytes to print
 *
 * Return: the concatenated string (char *)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
