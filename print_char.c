#include "main.h"
/**
 *print_char - prints character
 *@args: argument
 *
 *Return: character
 */

int print_char(va_list args)
{

	_printChar(va_arg(args, int));
	return (1);
}
