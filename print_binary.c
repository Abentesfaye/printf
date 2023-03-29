#include "main.h"

/**
 * _printBinary - prints the binary representation of a number
 * @args: the va_list containing the number to print
 *
 * Return: the number of digits printed
 */
int _printBinary(va_list args)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(args, unsigned int), 2);

	size = _printf(p_buff);

	return (size);
}