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
	int i=0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

