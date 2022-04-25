#include <stdio.h>
#ifndef TEST_H_
#define TEST_H_
void max (int a , int b)
{
        if(a < b)
                printf("%d is larger\n", b);
        else {
                printf("%d is larger\n", a);
        }
}
#endif // test.h
