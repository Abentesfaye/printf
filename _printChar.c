#include "main.h"

/**
 * _printChar - Write a character to stdout
 * @c: The character to write
 *
 * Return: The number of characters written
 */
int _printChar(char c)
{
    return (write(1, &c, 1));
}