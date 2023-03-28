#include "main.h"

/**
 * _printf - Custom printf function that handles %s, %c, and %% format specifiers
 * @format: The format string to print
 * @...: The variable arguments list
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    int count = 0, i = 0;
    va_list args;
    char *str;

    va_start(args, format);

    if (format == NULL)
        return (-1);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    _printChar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (str == NULL)
                        str = "(null)";
                    count += _printStr(str);
                    break;
                case '%':
                    _printChar('%');
                    count++;
                    break;
                default:
                    _printChar('%');
                    _printChar(format[i]);
                    count += 2;
                    break;
            }
        }
        else
        {
            _printChar(format[i]);
            count++;
        }
        i++;
    }

    va_end(args);
    return (count);
}
