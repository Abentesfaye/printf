#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct func_type - type structure
 * @t: pointer to the argument
 * @f: pointer-function associated with the argument
 */
typedef struct func_type
{
  char *t;
  int (*f)(va_list);
} func_t;
/*function prototype */
int _printf(const char *format, ...);
int (*get_func(const char *))(va_list);
int _printChar(char c);
int _strlen(char *);
int print_rev(va_list args);
int rot13(va_list args);
int print_number(unsigned int n);
int countDigits(unsigned int num);
int countOctal(unsigned int num);
int countBinary(unsigned int num);
int print_b(va_list args);
int print_o(va_list args);
int print_d(va_list args);
int print_x(va_list args);
void print_lowerHex(unsigned int num, int *count);
int print_X(va_list args);
void print_upperHex(unsigned int num, int *count);
int print_p(va_list args);
int print_s(va_list args);
int print_c(va_list args);
int print_u(va_list args);
int print_F(va_list args);
int print_pct(va_list args);
#endif
