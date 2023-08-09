#include <unistd.h>

int main(int arg, char **tab)
{
    int i;
    int flag;
    if(arg == 2)
    {
        i = 0;
        while(tab[1][i] == ' ' || tab[1][i] == '\t')
            i++;
        while(tab[1][i])
        {
            if(tab[1][i] == ' ' || tab[1][i] == '\t')
                flag = 1;
            if(!(tab[1][i] == ' ' || tab[1][i] == '\t'))
            {
                if(flag == 1)
                    write(1, " ", 1);
                flag = 0; 
                write(1, &tab[1][i], 1);
            }
                i++;
        }
    }
    write(1, "\n", 1);
}