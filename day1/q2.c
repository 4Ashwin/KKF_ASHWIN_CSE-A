#include <stdio.h>

void mergeSort(int a[], int n)
{
    int mid = n / 2;
    // int left[mid];
    for (int i = 0; i < mid; i++)
    {
        /* code */
    }
}

int main()
{
    int a[20], n;
    printf("Enter the size :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    mergeSort(a, n);

    return 0;
}