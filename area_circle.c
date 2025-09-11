#include <stdio.h>
int main() 
{
    int r;
    float a;
    printf("Enter the radius of the circle:");
    scanf("%d", &r);
    a=3.14*r*r;
    printf("The area of circle of given radius is %.2f.\n", a);
    return 0;
}
