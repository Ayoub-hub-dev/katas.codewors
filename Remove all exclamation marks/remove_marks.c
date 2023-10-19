char *remove_marks(const char *str_in, char *str_out)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while (str_in[i]) // length of str_in
        i++;

    while (str_in[i] == '!' || str_in[i] == '\0') // skiping "!" and '\0' from end of str_in
        i--;

    while (n <= i) // copying from str_in to str_out 
    {
        str_out[n] = str_in[n];
        n++;
    }
    str_out[n] = '\0';
    return str_out;
}
#include <stdio.h>

int main()
{
    const char *str = "!Hi! Hi!!!!!!!!!!";
    char str_o[10];
    printf("%s", remove_marks(str, str_o));
    return (0);
}