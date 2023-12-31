#include "main.h"
/**
* print_char - function that prints a character to stdout.
* @args: variadic arguments.
*
* Return: number of characters printed.
*/

int print_char(va_list args)
{
	int value;
	char c;
	int count;

	c = (char) va_arg(args, int);
	count = 0;

	if (c == '\0')
		return (0);

	if (c)
	{
		value = write(1, &c, 1);
		if (value < 0)
			return (-1);

		count += value;
	}

	return (count);
}
