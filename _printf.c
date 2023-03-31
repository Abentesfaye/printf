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
	int (*f)(va_list);
	int i = 0;
	int counter = 0;
	int value = 0;
	va_list args;

	va_start(args, format);
	
	/*prvent parsing a null pointer*/

	if (format == NULL)
		return (-1);
	/*print each character of string*/
	while (format[i])
	{
		if (format[i] != '%')
		{
		value = write(1, &format[i], 1);
		counter += value;
		i++;
		continue;
		}
		if (format[i] == '%')
		{
			f = get_func(&format[i + 1]);
			if (f != NULL)
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
	}
	return (counter);
}
