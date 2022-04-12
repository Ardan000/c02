#include <unistd.h>

void change_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";

    write(1, "\\", 1);
    write(1, &hex[c / 16], 1);
    write(1, &hex[c % 16], 1);

}

void ft_putstr_non_printable(char *str)
{
    int i = 0;


    while (str[i] != '\0')
    {
        // voir si str[i] n'est pas un carractere imprimable
        if(!(str[i] >= 32 && str[i] <= 126))
        {
            change_hex(str[i]);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
    
}
/*
int main(void)
{
    char tab[] = "lol\n dg dg s";
    ft_putstr_non_printable(tab);
}
*/