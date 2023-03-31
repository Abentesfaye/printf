#include "main.h"

/**
 * _printf - custom printf function that handles only %c, %s, and %% specifiers
 * @format: format string to print
 * @...: variable arguments list
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL || !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				if (format[i + 1] != 'c' && format[i + 1] != 's'
				&& format[i + 1] != '%' && format[i + 1] != 'd'
				&& format[i + 1] != 'i' && format[i + 1] != 'b'
				&& format[i + 1] != 'p')
				{
					counter += _printChar(format[i]); /* % */
					counter += _printChar(format[i + 1]); /* d*/
					i++;  /* d */
				}
				else
				{
					f = get_func(&format[i + 1]);
					counter += f(args);
					i++;
				}
			}
		}
		else
		{
			_printChar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}


