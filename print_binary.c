#include "main.h"

/**
 * _printBinary - prints the binary representation of a number
 * @args: the va_list containing the number to print
 *
 * Return: the number of digits printed
 */
int _printBinary(va_list args)
{
	 unsigned int n = va_arg(args, unsigned int);
    int binary[32];
    int i, len = 0;

    for (i = 0; n > 0; i++)
    {
        binary[i] = n % 2;
        n /= 2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        _printChar(binary[i] + '0');
        len++;
    }

    return (len);
}