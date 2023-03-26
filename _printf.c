#include "main.h"
/**
 *_printf - function that work like a printf function
 *@format: the format that pass to the function
 *Return: length of format
 */

int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					{
						_printChar(va_arg(args, char));
						break;
					}
				default:
					{
						_printChar(*format);
						break;
					}
			}
		}
		else
		{
			_printChar(*format);
		}
		format++;
		counter++
	}
	va_end(args)
		return (counter);
