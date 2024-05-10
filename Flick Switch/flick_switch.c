#include <stdbool.h>
#include <stddef.h>
#include <string.h> // Include string.h for strcmp

void flick_switch(size_t length, const char *const array[length], bool result[length]) {
  bool toggled = true;
    for (size_t i = 0; i < length; i++) {
        if (strcmp(array[i], "flick") == 0)
          toggled = !toggled;
        result[i] = toggled;
    }
}