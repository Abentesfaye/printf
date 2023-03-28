#include "main.h"
/**
 * _printf - custom printf function that handles only %c and %s specifiers
 * @format: format string to print
 * @...: variable arguments list
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...) 
{   
    int i=0;
    int counter = 0;
    va_list args;
    va_start(args, format);
    
    if (format == NULL)
    {
        return -1;
    }
   while(format[i]){

        if(format[i]== '%' && format[i+1]== 'c')
        {
            _printChar(va_arg(args, int));
            counter++;
            i +=2;
        }
        else if (format[i] == '%' && format[i +1] == 's')
        {
            _printStr(va_arg(args, char *));
              counter++;
             i +=2;
        }

        else if (format[i] == '%' && format[i + 1] == '%')
        {
            _printChar('%');
             counter++;
             i +=2;
        }

        else{
            _printChar(format[i]);
            counter++;
            i++;
        }
   }
    return counter;
}
