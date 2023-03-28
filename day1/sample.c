#include <stdio.h>

int main()
{
    int a = 100, b = 200;
    int *p1, *p2, *t;
    p1 = &a;
    p2 = &b;
    printf(" a=%d b=%d\n ", *p1, *p2);
    // t = p1;
    // p1 = p2;
    // p2 = t;
    // printf("\nswaping\n a=%d b=%d\n ", *p1, *p2);
    printf("%d", (*p2 / *p1));
}