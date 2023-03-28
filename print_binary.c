#include "main.h"

/**
 * _printBinary - prints the binary representation of a given integer.
 * @args: the argument list containing the integer to be printed.
 *
 * Return: the length of the binary representation.
 */
int _printBinary(va_list args)
{
    int num = va_arg(args, int);
    int length = 0;

    if (num > 1)
        length = _printBinary(args);

    length++;
    _printChar(num & 1 + '0');

    return (length);
}
