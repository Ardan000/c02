#include <unistd.h>

int ft_str_is_printable(char *str)
{
    int i = 0;

    if(str[i] == '\0')     
    {
        return 1;

    }
    
    while(str[i] != '\0')
    {
        if(str[i] >= 33 && str[i] <= 126)
        {
            i++;
        }

        else
        {
            return 0;
        }
    }
    return 1;
}


/*/
int main(void)
{
    char tab[] = "524qd";

    printf("%d", ft_str_is_alpha(tab));


}
/*/