#include <stdio.h>

int power(int m, int n); /* without this line implicit declaration of function waring will be issued*/

int main() /* test power function */
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
}

/* raise x to n-th power; n > 0*/
int power(int base, int n)
{
    int i, p;

    p = 1;
    for(i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

/* 
A bit of history:
The biggest change between ANSI C and earlier versions is how functions are declared and defined.
In the original version of C , the power function woul have been written like this

power(x, n) 
int x, n; 
{
    int i,p;

    p = 1;
    for(i = 1; i <= n; ++i)
        p = p * x;
    return(p);
}

*/