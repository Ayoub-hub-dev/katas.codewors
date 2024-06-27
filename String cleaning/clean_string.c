#include <string.h>

char *clean_string(char *string) {
    

    size_t i = 0, j = 0;

    // Copy non-digit characters in place
    while (string[i] != '\0') {
        if (string[i] < '0' || string[i] > '9') {
            string[j] = string[i];
            j++;
        }
        i++;
    }
    string[j] = '\0'; // Null-terminate the cleaned string
  return (string);
}