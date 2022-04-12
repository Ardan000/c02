#include <unistd.h>

char *ft_strlowcase(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {   
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        
        i++;
    }

    return str;
}

/*/
int main(void)
{
    char tab[] = "JHYGFJ6545KsfdH";

    printf("%s", ft_strlowcase(tab));
}
/*/





