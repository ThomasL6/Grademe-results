#include <unistd.h>

int main(int arg, char **tab)
{
    int i = 0;
    if(arg == 2)
    {
        while(tab[1][i])
        {
            if(tab[1][i] >= 'a' && tab[1][i] <= 'z')
                tab[1][i] = 219 - tab[1][i];
            else if(tab[1][i] >= 'A' && tab[1][i] <= 'Z')
                tab[1][i] = 155 - tab[1][i];
            write(1, &tab[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}