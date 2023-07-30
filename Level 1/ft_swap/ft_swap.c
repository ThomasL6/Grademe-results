// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/*int main()
{
    int *s1 = 9;
    int *s2 = 6;
    pritnf("%s", ft_swap(s1, s2));
}*/