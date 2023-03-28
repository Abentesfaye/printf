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
    char c;
    char *str;
    int i = 0;
    int counter = 0;
    va_list args;
    va_start(args, format);
    if (format == NULL)
    {
        return (-1);
    }
    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i+1] == 'c')
        {
            c = va_arg(args, int);
            _printChar(c);
            counter++;
            i += 2;
        }
        else if (format[i] == '%' && format[i + 1] == 's')
        {
            str = va_arg(args, char *);
            if (str == NULL)
            {
                _printStr("(null)");
                counter += 6;
            }
            else
            {
                counter += _printStr(str);
            }
            i += 2;
        }
        else if (format[i] == '%' && format[i + 1] == '%')
        {
            _printChar('%');
            counter++;
            i += 2;
        }
        else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
        {
            int num = va_arg(args, int);
            if (num < 0)
            {
                _printChar('-');
                counter++;
                num = -num;
            }
            counter += _printInt(num);
            i += 2;
        }
        else
        {
            _printChar(format[i]);
            counter++;
            i++;
        }
    }
    va_end(args);
    return (counter);
}