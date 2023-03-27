#include "main.h"
/**
 * _printf - custom printf function that handles only %c and %s specifiers
 * @format: format string to print
 * @...: variable arguments list
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char *str;
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
                      _printChar(va_arg(args, int));
                        counter++;
                        break;
                    }
                case 's':
                    {
                        str = va_arg(args, char *);
                        counter += _printStr(str);
                        break;
                    }
                case '%':
                     {
                            _printChar('%');
                            counter++;
                            break;
                    }
                default:
                    {
                        _printChar(*format);
                        counter++;
                        break;
                    }
            }
        }
        else
        {
            _printChar(*format);
            counter++;
        }

        format++;
    }

    va_end(args);

    return (counter);
}
