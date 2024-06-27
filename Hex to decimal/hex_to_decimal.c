#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int find_index(char src) {
    const char *hex = "0123456789ABCDEF";
    int i = 0;
    while (hex[i] != src) {
        i++;
    }
    return i;
}

int hex_to_dec(const char *source) {
    size_t len = strlen(source);
    int is_negative = 0;

    // Check for negative sign
    if (source[0] == '-') {
        is_negative = 1;
        source++; // Skip the negative sign
        len--;    // Adjust the length
    }

    char *new_source = (char *)malloc((len + 1) * sizeof(char)); // Include space for null terminator

    // Convert the letters to uppercase
    int i = 0;
    while (source[i] != '\0') {
        if (source[i] >= 'a' && source[i] <= 'z') {
            new_source[i] = source[i] - 32; // Correct the conversion to uppercase
        } else {
            new_source[i] = source[i];
        }
        i++;
    }
    new_source[len] = '\0'; // Null-terminate the new string

    int res = 0;
    i = 0;
    while (new_source[i] != '\0') {
        res += find_index(new_source[i]) * pow(16, len - i - 1);
        i++;
    }

    free(new_source); // Free the allocated memory

    return is_negative ? -res : res;
}