#include <unistd.h>

int main(int arg, char **tab)
{
    int i = 0;
    int k = 1;
    char *str;
    if(arg == 2)
    {
        str = tab[1];
        while(str[i])
        {
            k = 1;
            if(str[i] >= 'a' && str[i] <= 'z')
                k = str[i] - 96;
            else if(str[i] >= 'A' && str[i] <= 'Z')
                k = str[i] - 64;
            while(k >= 1)
            {
                write(1, &str[i], 1);
                k--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}