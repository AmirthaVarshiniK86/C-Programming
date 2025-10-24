#include <stdio.h>
int main()
{
  int a[10][10], b[10][10], c[10][10]={0};
  int i, j, m, n;
  printf("Enter the size of the rows and columns: ");
  scanf("%d %d", &m, &n);
  printf("Enter the elements of the matrix A: \n");
  for (i=0; i<=m-1; i++)
    {
      for (j=0; j<=n-1; j++)
        {
          scanf("%d", &a[i][j]);
        }
    }
  printf("Enter the elements of the matrix B: \n");
  for (i=0; i<=m-1; i++)
    {
      for (j=0; j<=n-1; j++)
        {
          scanf("%d", &b[i][j]);
        }
    }
  printf("Sum of the Two Matrices: \n");
  for (i=0; i<=m-1; i++)
    {
      for (j=0; j<=n-1; j++)
        {
          c[i][j]=a[i][j]+b[i][j];
          printf("%d\t", c[i][j]);
        }
      printf("\n");
    }
  return 0;
}
