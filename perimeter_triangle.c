#include <stdio.h>
int main()
{
  int a,b,c,p;
  printf("Enter the first side of triangle:");
  scanf("%d",&a);
  printf("Enter the second side of triangle:");
  scanf("%d",&b);
  printf("Enter the third side of triangle:");
  scanf("%d",&c);
  p=a+b+c;
  printf("The perimeter of triangle is %d.\n",p);
  return 0;
}
