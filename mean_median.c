#include <stdio.h>
int main()
{
    int a[10], n, i, sum=0, temp, j;
    float mean=0.0, median=0.0;
    printf("Enter size of array (max 10): \n");
    scanf("%d", &n);
    if (n > 10 || n <= 0) {
        printf("Invalid size!\n");
        return 1;
    }
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    mean = (float)sum / n;
    printf("Mean value is: %f\n", mean);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if (n % 2 == 0)
        median = (float)(a[n / 2] + a[(n - 1) / 2]) / 2;
    else
        median = a[n / 2];
    printf("Median is: %f\n", median);
    return 0;
}
