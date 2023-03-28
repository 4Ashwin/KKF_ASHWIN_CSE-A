#include <stdio.h>

int sumPrime(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("\n%d is sum\n ", sum);
    for (int i = 2; i <= sum / 2; i++)
    {
        if (sum % i == 0)
            return 0;
    }

    return 1;
}

void reverse(int a[], int n)
{
    int t;
    for (int i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = t;
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

    if (sumPrime(a, n))
        printf("\nSum is prime\n");
    else
        printf("\nSum is no prime\n");

    reverse(a, n);
    printf("The array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    char charArray[20];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            charArray[i] = '$';
        }
        else
        {
            char ch = a[i] + '0';
            charArray[i] = ch;
        }
    }
    printf("\nThe array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c\t", charArray[i]);
    }

    return 0;
}