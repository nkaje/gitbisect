/*
 * Defalut License
 */

#include <stdio.h>

#define CONST_ONE 10
#define CONST_TWO 0

int do_operation(int a, int b)
{
    return (a/b);
}

int main()
{
    int a = CONST_ONE;
    int b = CONST_TWO;

    printf("a / b = %d\n", do_operation(a, b));
    return 0;
}
