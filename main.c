#include <stdio.h>
#include "main.h"
int main(void)
{
    char *str = "Hello, world!";
    int len1, len2;
int a = 42;
    int b = -123;
    int c = 0;
    len1 = _printf("Character: %c\n", 'H');
    len2 = printf("Character: %c\n", 'H');
    printf("len1: %d\n", len1);
    printf("len2: %d\n", len2);

    len1 = _printf("String: %s\n", str);
    len2 = printf("String: %s\n", str);
    printf("len1: %d\n", len1);
    printf("len2: %d\n", len2);

    len1 = _printf("Null string: %s\n", NULL);
    printf("len1: %d\n", len1);
    printf("len2: %d\n", len2);

    len1 = _printf("Percent sign: %%\n");
    len2 = printf("Percent sign: %%\n");
    printf("len1: %d\n", len1);
    printf("len2: %d\n", len2);
 _printf("Unknown:[%r]\n");
   _printf("a = %d\n", a);
    _printf("b = %i\n", b);
    _printf("c = %d\n", c);

    return (0);
}
