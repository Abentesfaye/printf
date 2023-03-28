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
    int counter = 0;
    va_list args;
    va_start(args, format);

    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i+1] != '\0')
        {
            i++;
            if (format[i] == '%')
            {
                _printChar('%');
                counter++;
            }
            else if (format[i] == 'c')
            {
                _printChar(va_arg(args, int));
                counter++;
            }
            else if (format[i] == 's')
            {
                _printStr(va_arg(args, char *));
                counter += _strlen(va_arg(args, char *));
            }
            else
            {
                _printChar('%');
                _printChar(format[i]);
                counter += 2;
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
