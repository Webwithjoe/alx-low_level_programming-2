#include <stdlib.h>
#include "main.h"

/**
 * _memset - program fills memory with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}

/**
 * _calloc - program allocates memory for an array
 * @nmemb: number of elements in array
 * @size: gives size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
