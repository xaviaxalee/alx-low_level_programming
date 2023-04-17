#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	const char *filename = __FILE__;
	size_t len = strlen(filename);
	char *buf = malloc(len + 1);

	memcpy(buf, filename, len);
	buf[len] = '\n';
	write(STDOUT_FILENO, buf, len + 1);
	free(buf);
	exit(0);
}

