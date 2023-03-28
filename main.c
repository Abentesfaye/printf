#include "main.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;

    len1 = printf("Hello, %s! %c is your favorite letter, right?%%\n", "World kdkdkdkdkdkkdkka", 'A');
    len2 = _printf("Hello, %s! %c is your favorite letter, right?%%\n", "World kdkdkdkdkdkkdkka", 'A');

    printf("len1 = %d\n", len1);
    printf("len2 = %d\n", len2);

    return (0);
}
