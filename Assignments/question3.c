#include <stdio.h>
int main()
{
    int n, sum = 0, lastdigit;
    printf("Enter the number : ");
    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
        lastdigit = n % 10;
        sum = lastdigit * lastdigit * lastdigit + sum;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf(" it is an armstrong number %d", sum);
    }
    else
        printf("it is not an armstrontg number");
    return 0;
}