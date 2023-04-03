#include "main.h"
/**
 * _memset - fill a block of memory with a specific byte value
 * @param s: Pointer to the memory area to be filled.
 * @param b: The byte value to be written.
 * @param n: The number of bytes to be filled.
 *
 * Return: The pointer to the array s.
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
