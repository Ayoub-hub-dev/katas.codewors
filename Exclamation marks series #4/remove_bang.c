#include <stdlib.h>
#include <string.h>
char *remove_bang (const char *string)
{
  char *new_str = (char *)malloc(strlen(string) * sizeof(char) + 1);
  
  if (new_str == NULL)
    return (NULL);
  
  size_t i = 0, j = 0;
  
  while (string[i] != '\0') {
    if (string[i] != '!') {
      new_str[j] = string[i];
      j++;
    }
    i++;
  }
  new_str[j] = '!';
  new_str[j + 1] = '\0';
  return (new_str);
}