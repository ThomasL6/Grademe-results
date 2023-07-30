#include <unistd.h>

int main(int arg, char **tab)
{
    int i = 0;
    if(arg == 2)
    {
        while(tab[1][i])
            i++;
        i--;
        while((tab[1][i] == ' ' || tab[1][i] == '\t') && i != 0)
            i--;
        while(tab[1][i] != ' ' && tab[1][i] != '\t' && i != 0 )
            i--;
        if(tab[1][i] == ' ' || tab[1][i] == '\t')
            i++;
        while(tab[1][i] && tab[1][i] != ' ' && tab[1][i] != '\t')
        {
            write(1, &tab[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}