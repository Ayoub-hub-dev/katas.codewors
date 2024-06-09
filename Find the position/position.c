#include <stdlib.h>
#include <stdio.h>

char* position(char alphabet) {
    // Calculate the position number
    int positionNumber = alphabet - 'a' + 1;

    // Allocate enough memory for the message
    char *message = (char *)malloc(30 * sizeof(char)); // Adjust size as needed
    if (message == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Format the message string
    sprintf(message, "Position of alphabet: %d", positionNumber);

    return message;
}



int main()
{
    printf("%s", position('z'));
    return (0);
}