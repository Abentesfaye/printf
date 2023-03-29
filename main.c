#include <stdio.h>
#include "main.h"
int main(void)
{
      void *p = (void*)0x12345678;
    int len = 0;

    len = _printf("Pointer address: %p\n", p);
    _printf("Length: %d\n", len);
     printf("Length: %d\n", len);
     _printf("%b",192);
    return 0;
}