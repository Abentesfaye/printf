#include "main.h"

/**
 * print_pointer - prints a pointer in hexadecimal format
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_pointer(va_list args)
{
	int j;
	void *p = va_arg(args, void *);
	unsigned long int addr = (unsigned long int)p;
	unsigned long int quotient, remainder;
	char hex[16];
	int i = 0, len = 0;

    /* Convert pointer address to hexadecimal string */
	do {
		quotient = addr / 16;
		remainder = addr % 16;

		if (remainder < 10)
			hex[i] = remainder + '0';
		else
		hex[i] = remainder - 10 + 'a';
		i++;
		addr = quotient;
	}
	while (quotient > 0)

    /* Print the hexadecimal string with '0x' prefix */
	_printChar('0');
	_printChar('x');

	for (j = i - 1; j >= 0; j--)
	{
		_printChar(hex[j]);
		len++;
	}
	return (len + 2); /* Add 2 for the '0x' prefix */
}
