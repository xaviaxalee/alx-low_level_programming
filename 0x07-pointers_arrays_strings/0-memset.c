#include "main.h"
/**
 * _memset - Fill memory with a constant byte
 * @param s Pointer to the memory area to be filled
 * @param b The byte value to be written
 * @param n Number of bytes to be filled
 *
 * Return: The pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

