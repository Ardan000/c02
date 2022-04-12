#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;

    if(str[i] == '\0')     
    {
        return 1;

    }
    
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
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
    char tab[] = "545454658 6546561464894687";

    printf("%d", ft_str_is_alpha(tab));


}
/*/