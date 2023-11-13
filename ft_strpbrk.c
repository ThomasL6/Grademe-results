#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    if(!s1 || !s2)
        return(0);
    while(*s1)
    {
        const char *temp = s2;
        while(*temp)
        {
            if(*s1 == *temp)
                return s1;
            temp++;
        }
        s1++;
    }
    return(0);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        char *result = ft_strpbrk(argv[1], argv[2]);
        if (result != NULL)
            printf("Caractère commun trouvé : %c\n", *result);
        else
            printf("Aucun caractère commun trouvé.\n");
    }
    else
    {
        printf("Usage: %s <chaine1> <chaine2>\n", argv[0]);
    }
    return 0;
}