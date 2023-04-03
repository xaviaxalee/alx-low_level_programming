#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout).
 *
 * This function takes a single character argument and writes it to the
 * standard output (stdout) stream. It returns 1 on success and -1 on error,
 * with the error code being set in the errno variable.
 *
 * @param c The character to be written to stdout.
 * @return Returns 1 on success, and -1 on error with errno set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
