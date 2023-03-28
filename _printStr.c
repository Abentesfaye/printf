#include "main.h"
/**
 * _printStr - Write a string to stdout
 * @str: The string to write
 *
 * Return: The number of characters written
 */
int _printStr(char *str)
{
    int len = 0;

    if (str == NULL)
    {
        len += _printStr("(null)");
    }
    else
    {
        while (*str != '\0')
        {
            _printChar(*str);
            str++;
            len++;
        }
    }

    return (len);
}
