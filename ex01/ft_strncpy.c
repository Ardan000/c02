#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];

        i++;
    }
    while(i < n)
    {
        dest[i] = '\0'; 
        i++;
    }

    return dest;
}





/*/
int main(void)
{
    unsigned int size_nv_tab = 256;

    char tab[] = "kjfghnlkgfjhg ldkfjhs vldkjh vlds lvwlkj gldwjk vdflkjv dwn mgij hgmkrlwj hrmkjgb";
    char nv_tab[size_nv_tab];

    ft_strncpy(nv_tab, tab, size_nv_tab);
    printf("%s", nv_tab);

}
/*/