// 1ere lettre plus chaque lettre apres un espace ou un caractere qui n'est pas 
// une lettre ou un chiffre

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

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int j = 0;

    ft_strlowcase(str);

    if(str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32; 

    i++;

    while(str[i] != '\0')
    {
        if(!((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z') || (str[j] >= '0' && str[j] <= '9')))
        {
            if(str[i] >= 97 && str[i] <= 122)
            {
                str[i] -= 32;
            }

        }
        i++;
        j++;
    }

    return str;
}
/*/
int main(void)
{
    char tab[] = "salut, comment tu vas ? 42mots quARANTe-deux; cinquante+et+un\n";

    printf("%s", ft_strcapitalize(tab));
}
/*/
