#include <stdio.h>
int main()
{
  int a[10][10];
  int i, j, m, n;
  printf("Enter the size of the rows and columns: ");
  scanf("%d %d", &m, &n);
  printf("Enter the elements of the matrix: \n");
  for (i=0; i<=m-1; i++)
    {
      for (j=0; j<=n-1; j++)
        {
          scanf("%d", &a[i][j]);
        }
    }
  printf("The Elements are: ");
  for (i=0; i<=m-1; i++)
    {
      for (j=0; j<=n-1; j++)
        {
          printf("%d\t", a[i][j]);
        }
      printf("\n");
    }
  return 0;
}
