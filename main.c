#include "main.h"
int main(void)
{
     int x = 42;
    int *p = &x;
    _printf("The value of x is %p\n", p);

    return 0;
}