#include <stdlib.h>

char *replace(const char *s) {
    int i, j;
    char *src = "aeiouAEIOU";

    i = 0;
    while (s[i])
        i++;

    char *dest = (char *)malloc((i + 1) * sizeof(char));

    if (dest == NULL)
        return NULL;

    i = 0;
    while (s[i])
    {
        int replaced = 0;

        j = 0;
        while (src[j]) {
            if (src[j] == s[i])
            {
                dest[i] = '!';
                replaced = 1;
                break;
            }
            j++;
        }

        if (!replaced)
            dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
    free(dest);
}

#include <stdio.h>
int main()
{
    const char *input = "!Hi! Hi!";
    printf("%s", replace(input));
    return (0);
}