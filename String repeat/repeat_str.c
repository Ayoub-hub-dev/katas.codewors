#include <stdlib.h>
#include <string.h>
char *repeat_str(size_t count, const char *src)
{
  if (count == 0) {
    
        char *empty_str = (char *)malloc(1);
        if (empty_str == NULL)
            return NULL;
        empty_str[0] = '\0';
        return empty_str;
    }
  
  char *str_new = (char *)malloc((strlen(src) * sizeof(char)) * (count + 1));
  
  size_t i = 0 , j = 0;
  while (i < count) {
    strcpy(str_new + i * strlen(src), src);
    i++;
  }
  str_new[strlen(src) * count] = '\0';
  return (str_new);
}