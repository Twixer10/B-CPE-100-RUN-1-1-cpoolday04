/*
** EPITECH PROJECT, 2020
** My Evil Str
** File description:
** 
**
*/
int my_strlen(char *c);
int my_putnbr(int i);
void my_putstr(char *c);

char *my_evil_str(char *str)
{
    char c;
    int i = my_strlen(str) - 1;
    int j = 0;

    while (j < i)
    {
        c = str[j];
        str[j] = str[i];
        str[i] = c;
        i = i - 1; 
        j = j + 1;
    }
    return (str);
}
