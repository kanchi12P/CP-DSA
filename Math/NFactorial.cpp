#include <stdio.h>
int Factorial(int);

int Factorial(int n)
{
    int fac = 1;
    while (n > 0)
    {
        fac = fac * n;
        n--;
    }
    return fac;
}

int main()
{
    printf("Enter num: \n");
    int n;
    scanf("%d", &n);
    printf("\nFactorial of %d is : %d \n", n, Factorial(n));
    return 0;
}