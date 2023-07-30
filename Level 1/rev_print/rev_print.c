#include <unistd.h>

int main(int arg, char **tab)
{
    int i = 0;
    if(arg == 2)
    {
        while(tab[1][i])
            i++;
        while(i >= 1)          
        {
             write(1, &tab[1][i - 1], 1);
             i--;
        }
    }
    write(1, "\n", 1);
}