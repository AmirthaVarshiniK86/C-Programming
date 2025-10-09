#include <stdio.h>
void add(int a, int b) {
    int c = a + b;
    printf("Addition: %d\n", c);
}
void sub(int a, int b) {
    int d = a - b;
    printf("Subtraction: %d\n", d);
}
int main()
{
    int a = 5, b = 3;
    goto start;
start:
    add(a, b);
    goto begin;
begin:
    sub(a, b);
    return 0;
}
