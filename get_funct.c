#include "main.h"
/**
 * get_func - check for valid specifier
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
	int i;
	func_t p[] = {
		{"s", print_s},
		{"c", print_c},
		{"d", print_d},
		{"i", print_d},
		{"b", print_b},
		{"o", print_o},
		{"u", print_u},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"R", rot13},
		{"r", print_rev},
		{"F", print_F},
		{"%", print_pct},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*format == *(p[i].t))
		{
			return (p[i].f);
		}
	}
	return (NULL);
}
