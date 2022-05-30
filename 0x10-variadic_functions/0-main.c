#include <stdio.h>
#include <stdarg.h>

/* print all args one at a time until a negative argument is seen;
   all args are assumed to be of int type */
void printargs(int n, ...)
{
    va_list ap;
    int i;
    int nextValue;

    va_start(ap, n);
    for (i = 0; i < n; nextValue = va_arg(ap, int))
    {
        printf("%d ", nextValue);
        putchar('\n');
    }
    va_end(ap);
    putchar('\n');
}

int main(void)
{
   printargs(5, 2, 14, 84, 97, 15, -1, 48, -1);
   printargs(84, 51, -1, 3);
   printargs(-1);
   printargs(1, -1);
   return 0;
}
