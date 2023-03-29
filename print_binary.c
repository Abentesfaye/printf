#include "main.h"

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
