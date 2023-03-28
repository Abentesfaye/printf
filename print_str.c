#include "main.h"
/**
 *print_str - prints string
 *@args: arguments
 *Return: string
 */

int print_str(va_list args)
{

	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_printChar(str[j]);
	}
	return (j);
}
