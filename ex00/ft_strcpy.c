#include <unistd.h>


char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];

        i++;
    }
    dest[i] = '\0'; 

    return dest;
}


/*

int main(void)
{

    char tab[] = "bonjour";
    char nv_tab[8];

    ft_strcpy(nv_tab, tab);
    printf("%s", nv_tab);

}
*/






