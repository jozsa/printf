#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

int print_bin(va_list bin)
{
	unsigned int number, count = 0, index = 0;
	int arr[1000];

	number = va_arg(bin, unsigned int);

	if (number < 2)
	{
		_putchar(number + '0');
		count = 1;
	}
	else if (number >= 2)
	{
		while (number > 0)
		{
			arr[index] = number % 2;
			number /= 2;
			index++;
		}
	}
	while (index--)
	{
		_putchar(arr[index] + '0');
		count++;
	}
	return (count);
}
