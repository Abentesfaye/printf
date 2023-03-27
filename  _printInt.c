#include "main.h"

void _printInt(int num)
{
    if (num < 0) {
        _printChar('-');
        num = -num;
    }
    if (num / 10) {
        _printInt(num / 10);
    }
    _printChar(num % 10 + '0');
}
