#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    int i = 2;
    if(n == 0)
        return(0);
    while(i < n)
    {
        if(n % i == 0)
            return(0);    
        i++;
    }
    return(1);
}

void fprime(char *str)
{
    int n = atoi(str);
    int factor = 2;
    int first_n = 1;
    if(n == 1)
        printf("1");
    while(n >= factor)
    {
        if(n % factor == 0 && is_prime(factor))
        {
            if(first_n == 1)
                printf("%d", factor);
            else
                printf("*%d", factor);
            first_n = 0;
            n = n / factor;
        }
        else
            factor++;
    }
}

int main(int arg, char **tab)
{
    if(arg == 2)
        fprime(tab[1]);
    printf("\n");
}