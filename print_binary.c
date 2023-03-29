#include "main.h"

/**
 * _printBinary - prints the binary representation of a number
 * @args: the va_list containing the number to print
 *
 * Return: the number of digits printed
 */
int _printBinary(va_list args)
{
	 int num = va_arg(args, int);
	int mask = 1;
	int length = 0;
	int i;

	/* count the number of digits in the binary string */
	for (i = 0; i < 32; i++)
	{
		if ((num & mask) == mask)
			length++;
		mask <<= 1;
	}

	/* print the binary string */
	for (i = 0; i < length; i++)
	{
		if ((num & (1 << (length - i - 1))) == (1 << (length - i - 1)))
			_printChar('1');
		else
			_printChar('0');
	}

	return (length - 1);
}