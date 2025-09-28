#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter a value: ");
  scanf("%d", &a);
  printf("Enter a value: ");
  scanf("%d", &b);
  if (a>b)
  {
    printf("%d is the big number", a);
  }
  return 0;
}
