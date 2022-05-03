#include <stdio.h>
int main()
{
    int x, i, evenSum = 0, oddSum = 0;
    printf("Enter 10 integers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x);
        if (x & 1)
            oddSum += x;
        else
            evenSum += x;
    }
    printf("Even sum is %d and odd sum is %d", evenSum, oddSum);
    return 0;
}