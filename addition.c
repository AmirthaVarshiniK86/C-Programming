#include <stdio.h>
#include <conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter the first value to add:");
  scanf("%d",&a);
  printf("Enter the second value to add:");
  scanf("%d",&b);
  c=a+b;
  printf("The sum of two numbers a and b is %d.",c);
  getch();
}
