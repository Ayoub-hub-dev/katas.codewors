#include <stdlib.h>
#include <string.h>

// 

char *no_space(const char *str_in) {

    char *new_str  = malloc(strlen(str_in) * sizeof(char));
    
    int i = 0;
    int j  = 0; 
    while(str_in[i] != '\0') {
      if (str_in[i] != 32) {
        new_str[j] = str_in[i];
        j++;
      }
      i++;
    }
    new_str[j] = '\0';
    return (new_str);
}