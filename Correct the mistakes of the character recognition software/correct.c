#include <stddef.h>
char *correct(char *string) {
  size_t i = 0;
  
  while (string[i]) {
    switch (string[i]) {
        case '1':
          string[i] = 'I';
          break;
        case '5':
          string[i] = 'S';
          break;
        case '0':
          string[i] = 'O';
          break;
        default:
          string[i] = string[i];
    }
    i++;
  }
  string[i] = '\0';
  return (string);
}