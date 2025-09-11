#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter the first value to divide: ");
    scanf("%d", &a);
    printf("Enter the second value to divide (Number must 'not be 0' due to Zero Error): ");
    scanf("%d", &b);
    c = a/b;
    printf("The division quotient of two numbers a and b is %d.\n", c);
    return 0;
}
