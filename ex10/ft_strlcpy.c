#include <unistd.h>

int size_src(char *src)
{
    int i = 0;

    while(src[i] != '\0')
        i++;
    
    return i;
}



unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0 ;
    int size_copy;

    size_copy = size_src(src);

    while(src[i] != '\0' && i <= size + 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return size_copy;
}

/*/
int main(void)
{
    char tab[] = "salut";
    char tab_copy[256];
    unsigned int size = 38;
    printf("size dest is %d\n", ft_strlcpy(tab_copy, tab, size));
    printf("%s\n", tab_copy);
}
/*/