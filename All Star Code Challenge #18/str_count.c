#include <stddef.h>

size_t str_count(const char *str, char letter)
{
    int     i;
    int     count;
    count = 0;
    if (str[0] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] == letter)
            count++;
        i++;
    }
    return (count);
}

#include <stdio.h>
int main()
{
    char l = 'z';
    char *str = "";
    printf("%lli", str_count(str, l));
    return (0);
}