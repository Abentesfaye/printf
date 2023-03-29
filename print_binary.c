#include "main.h"

/**
 * _printBinary - prints the binary representation of a number
 * @args: the va_list containing the number to print
 *
 * Return: the number of digits printed
 */
int _printBinary(va_list args)
{
<<<<<<< HEAD
	 int num = va_arg(args, unsigned int);
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
=======
	int num = va_arg(args, int);
	int length = 0;

	if (num == 0)
	{
		_printChar('0');
		length = 1;
	} else
	{
		length = _printBinary(num);
	}
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

	if (num > 1)
	{
		length = _printBinary(num >> 1);
	}
	_printChar((num & 1) + '0');
	length++;
	return (length);
}
>>>>>>> 5628b91108367a7d5dbe4a0bfd23c05f16948744
