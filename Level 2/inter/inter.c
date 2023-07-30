#include <unistd.h>

int main(int arg, char **tab)
{
    int i = 0;
    int k;
    int l = 0;
    char *s1;
    char *s2;
    if(arg == 3)
    {
        s1 = tab[1];
        s2 = tab[2];
        while(s1[i])
        {
            k = 0;
            while(s2[k])
            {
                if(s1[i] == s2[k])
                {
                    l = 0;
                    while(s1[l] != s1[i])
                        l++;
                    if(l == i)
                    {
                        l = 0;
                        while(s2[l] != s2[k])
                            l++;
                        if(l == k)
                            write(1, &s1[i], 1);
                    }
                }
                k++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
