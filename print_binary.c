#include "main.h"
/**
 * _printDecimalToBinary - Converts a decimal number to binary and prints it.
 *
 * @args: A va_list containing the decimal number to be converted.
 *
 * Return: The length of the binary representation.
 */
int _printDecimalToBinary(va_list args)
{
    int num = va_arg(args, int);
    int length = 0;

    if (num == 0) {
        _printChar('0');
        return (1);
    }

    length = _printBinary(num);
    return (length);
}

/**
 * _printBinary - Converts a decimal number to binary and prints it.
 *
 * @num: The decimal number to be converted.
 *
 * Return: The length of the binary representation.
 */
int _printBinary(int num)
{
    int length = 0;

    if (num > 1) {
        length = _printBinary(num >> 1);
    }
    _printChar((num & 1) + '0');
    length++;

    return (length);
}
