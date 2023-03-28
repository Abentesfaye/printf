#include "main.h"

/**
 * _printInt - print an integer recursively
 * @n: the integer to print
 *
 * Return: the number of characters printed
 */
int _printInt(int n)
{
    int count = 0;
    if (n / 10)
        count += _printInt(n / 10);
    _printChar(n % 10 + '0');
    return (count + 1);
}
