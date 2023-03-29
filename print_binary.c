#include "main.h"
/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_binary(va_list args)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(args, unsigned int), 2);

	size = _printf(p_buff);

	return (size);
}
