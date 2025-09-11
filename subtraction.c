#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter the first value to subtract: ");
    scanf("%d", &a);
    printf("Enter the second value to subtract: ");
    scanf("%d", &b);
    c = a - b;
    printf("The difference of two numbers a and b is %d.\n", c);
    return 0;
}
