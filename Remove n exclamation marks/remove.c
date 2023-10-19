#include <stdlib.h>

char *remove(const char *str, int n)
{
    char character = '!';
    char *ptr;
    int     i;

    i = 0;
    while (str[i])
        i++;
    ptr = (char *)malloc((i + 1) * sizeof(char));

    if (ptr == NULL)
        return (NULL);
    char *result = ptr;
    i = 0;
    while (*str)
    {
        if (*str == character && i < n)
        {
            str++;
            i++;
        }
        else
        {    
            *ptr = *str;
            ptr++;
            str++;
        }
    }
    *ptr = '\0';
    return (result);
    free(result);
}

#include <stdio.h>
int main() {
    const char *original = "!hi";
    char *duplicate = *remove(original, 1);

    if (duplicate != NULL) {
        printf("Original string: %s\n", original);
        printf("Duplicated string: %s\n", duplicate);
        free(duplicate); // Don't forget to free the allocated memory when done
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
