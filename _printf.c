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
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;

	va_start(args, format);
	int (*f)(va_list);
	/*prvent parsing a null pointer*/

	if (format == NULL)
		return (-1);
	/*print each character of string*/
	while (format[i])
	{
		if (format[i] != '%')
		{
		value = write(1, &format[i], 1);
		count += value;
		i++;
		continue;
		}
		if (format[i] == '%')
		{
			f = get_func(&format[i + 1]);
			if (f != NULL)
			{
<<<<<<< HEAD
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
=======
			value = f(args);
			count += value;
			i = i + 2;
			continue;
			}
			if (format[i + 1] == '%')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i], 1);
				count += value;
				i = i + 2;
				continue;
>>>>>>> b618c5baf339579cad285df3c487d12fda3efb98
			}
		}
	}
	return (count);
}
