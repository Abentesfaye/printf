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
    int i = 0, count = 0;
    va_list args;
    va_start(args, format);
    if (format == NULL)
        return -1;
    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            i++;
            if (format[i] == 'c')
            {
                _printChar(va_arg(args, int));
                count++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                if (str == NULL)
                {
                    _printStr("(null)");
                    count += 6;
                }
                else
                {
                    _printStr(str);
                    count += _strlen(str);
                }
            }
            else if (format[i] == '%')
            {
                _printChar('%');
                count++;
            }
            else
            {
                _printChar('%');
                _printChar(format[i]);
                count += 2;
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
    return count;
}
