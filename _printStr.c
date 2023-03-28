#include "main.h"
/**
 * _printStr - prints a string to stdout
 * @str: the string to print
 *
 * Return: the number of characters printed
 */
int _printStr(char *str)
{
    int len = 0;
    if (str == NULL)
    {
        return _printStr("(null)");
    }
    if (str[0] == '\0')
    {
        _printChar('\0');
        return (1);
    }
    while (str[len] != '\0')
    {
        _printChar(str[len]);
        len++;
    }
    return (len);
}
