#include "main.h"

/**
 * printf_hex - prints hexadecimal
 * @val: arguments
 * Return: 
 */

int printf_hex(va_list val)
{
	int i;
	int *array;
	int counter;
	unsigned int num = va_arg(val unsigned ingt);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array malloc(counter * sizeof(int));

	for (i = 0; i< counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for  (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

