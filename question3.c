#include <stdio.h>
#include <math.h>
int main()
{
    int number, fDigit, lDigit, digits, sum = 0, temp;
    printf("Enter a number:");
    scanf("%d", &number);
    temp = number;
    lDigit = number % 10;
    digits = log10(number) + 1;
    while (temp > 0)
    {
        fDigit = temp % 10;
        temp /= 10;
    }
    temp = number / 10;
    sum += lDigit;
    while (digits - 2)
    {
        sum = sum * 10 + (temp % 10);
        digits -= 1;
        temp /= 10;
    }
    //sum = sum * 10 + lDigit;
    printf("sum is %d", sum);
    return 0;
}

/*
12345
5   1234
54  123
543 12
5432 1

*/