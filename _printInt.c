#include "main.h"

/**
 * _printInt - print an integer recursively
 * @n: the integer to print
 *
 * Return: the number of characters printed
 */
int _printInt(int n)
{
   int value;
	unsigned int abs, a, len;
	unsigned int countn = 1;

	len = 0;

	
	if (n < 0)
	{
		len = len + _printChar('-');
		abs = n * -1;
	}
	else
		abs = n;

	a = abs;
	while (a > 9)
	{
		a = a / 10;
		countn = countn * 10;
	}
	while (countn >= 1)
	{
		len = len + _printChar(((abs / countn) % 10) + '0');
		countn = countn / 10;
	}
	return (len);
}
