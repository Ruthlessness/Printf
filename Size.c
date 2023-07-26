#include "main.h"

/**
 * Size - Calculates the size in order to cast the argument
 * @format: Formatted string to print the arguments
 * @i: List to be printed.
 * Return: Precision.
 */

int Size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
