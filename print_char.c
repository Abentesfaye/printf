#include "main.h"
#include <unistd.h>
/**
 *print_char - prints character
 *@args: argument
 *
 *Return: character
 */

int print_char(va_list args)
{
	int count = 0;
	char c = va_arg(args, int);

	if (c)
	{
	count = write(1, &c, 1);
	return (count);
	}
	return (0);
}
