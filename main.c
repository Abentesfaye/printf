
 #include "main.h"
#include <limits.h>

int main(void)
{
    int ret;

    ret = _printf("Hello, world!\n");
    _printf("Return value: %d\n", ret);
    _printf("Printing a single character: %c\n", 'A');
    _printf("Printing a string: %s\n", "This is a test");
    _printf("Printing a number: %d\n", 12345);

    
    _printf("Printing a NULL string: %s\n", NULL);
    _printf("Printing an empty string: %s\n", "");
    _printf("Printing a string with special characters: %s\n", "This string contains a newline\nand a tab character\t");
    _printf("Printing an unsupported format specifier: %p\n", NULL);
    _printf("Printing a number larger than INT_MAX: %d\n", INT_MAX);
    _printf("Printing a number smaller than INT_MIN: %d\n", INT_MIN);
    _printf("Printing a non-printable character: %c\n", '\x07');
    _printf("Printing a very long string: %s\n", "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec a diam lectus. Sed sit amet ipsum mauris. Maecenas congue ligula ac quam viverra nec consectetur ante hendrerit. Donec et mollis dolor. Praesent et diam eget libero egestas mattis sit amet in urna ultrices accumsan. Donec sed odio eros.");
    _printf("Printing a number with a large number of digits: %d\n", 1234567890);

    return (0);
}

