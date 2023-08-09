#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int arg, char **tab)
{
    int n1;
    int n2;
    if(arg == 4)
    {
        n1 = atoi(tab[1]);
        n2 = atoi(tab[3]);
        if(tab[2][0] == '+')
            printf("%d", n1 + n2);
        else if(tab[2][0] == '-')
            printf("%d", n1 - n2);
        else if (tab[2][0] == '*')
            printf("%d", (atoi(tab[1]) * atoi(tab[3])));
        else if(tab[2][0] == '/')
            printf("%d", n1 / n2);
        else if (tab[2][0] == '%')
            printf("%d", n1 % n2);
    }
    printf("\n");
}