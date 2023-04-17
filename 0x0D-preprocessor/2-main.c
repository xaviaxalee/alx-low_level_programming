#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	const char *F_name = __FILE__;
	const char *p = F_name;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
