#include <math.h>
#include <stdarg.h>
#include <stdio.h>

typedef double (*MathFunc1)(double);

static double essay(MathFunc1 function, int num, ...)
{
    int i;
    double product = 1.0;
    va_list arguments;
    va_start(arguments, num);
    for (i = 0; i < num; i++)
        product *= va_arg(arguments, double);
    va_end(arguments);
    double result = (*function)(product);
    return result;
}

int main(void)
{
    double x = 3.14159265358979323846;  // M_PI?
    double y = 0.5;
    printf("%f\n", essay(sin, 2, x, y));
}
