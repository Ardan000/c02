#include <unistd.h>

char *ft_strupcase(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }

    return str;
}

/*/
int main(void)
{
    char tab[] = "skhudgfs5645641jhfg";

    printf("%s", ft_strupcase(tab));
}
/*/