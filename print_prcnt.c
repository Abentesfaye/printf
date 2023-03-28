#include "main.h"
/**
 *print_pct - prints character "%"
 *@args : arguments
 *
 *Return: character "%"
 */
int print_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}