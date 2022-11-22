#include "main.h"

/**
 * printf_hex_aux.c - prints a hexadecimal
 * @num: arguments
 * Return: counter
 */

int printf_hex_aux.c(unsigned long int num)
{
	long int;
	long int *array;
	long int counter;
	unsigned long int temp = num;

	while (num / 16 !0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

