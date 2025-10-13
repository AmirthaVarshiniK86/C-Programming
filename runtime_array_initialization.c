#include <stdio.h>
int main()
{
  int arr[100], n, i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i=0; i<=n-1; i++)
    {
      scanf("%d", &arr[i]);
    }
  printf("Elements in the array are: \n");
  for (i=0; i<=n-1; i++)
    {
      printf("%d\n", arr[i]);
    }
  return 0;
}
