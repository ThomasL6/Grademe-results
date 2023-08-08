#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

int main(int arg, char **tab)
{
    char *stock;
    char *reverse;
    int len;
    if( arg == 2)
    {
        stock = tab[1];
        len = ft_strlen(stock);
        reverse = 0;
        len--;
        while(stock[len])
        {
            if(stock[len - 1] == ' ')
            {
                reverse = &stock[len];
                while(*reverse && *reverse != ' ')
                {
                    ft_putchar(*reverse);
                    reverse++;
                }
                ft_putchar(' ');
            }
            else if(len == 0)
            {
                reverse = &stock[len];
                while(*reverse && *reverse != ' ')
                {
                    ft_putchar(*reverse);
                    reverse++;
                }
            }
            len--;
        }
    }
    ft_putchar('\n');
}