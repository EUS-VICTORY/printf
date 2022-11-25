#include "main.h"

/**
 * _putchar - prints the character c to stdout
 * @c: character to be printed
 * Return: on success 1
 * On error, returns -1, errno is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
