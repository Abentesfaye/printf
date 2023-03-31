#include "main.h"
/**
  * print_b - prints binary numbers (unsigned)
  * @args: the number
  *
  *
  * Return: number of chars printed
  */
int print_b(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int binary_num = 0, bit_pos = 0;
	int count = 0;

	/* Convert decimal number to binary */
	while (n > 0)
	{
		binary_num |= ((n & 1) << bit_pos);
		n >>= 1;
		bit_pos++;
	}

	/* Print binary number */
	for (int i = bit_pos - 1; i >= 0; i--)
	{
		_putchar((binary_num >> i) & 1 ? '1' : '0');
		count++;
	}

	return (count);
}
