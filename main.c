#include <stdio.h>
#include "main.h"
int main(void)
{
     int len = _printf("%b\n", 255);
     _printf("%i", len);
    return 0;
}