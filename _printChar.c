#include "main.h"
/**
 *_printChar - a function that prints character
 *
 *@c: input parameter
 *Return: one character in stdout
 */
int _printChar(char *c)
{
	return (write(1, &c, 1));
}
