#include <stddef.h> // NULL

const char* how_much_i_love_you(int nb_petals) {
  const char *phrases[] = {
        "I love you",
        "a little",
        "a lot",
        "passionately",
        "madly",
        "not at all"
    };

    int index = (nb_petals - 1) % 6;
    return phrases[index];
}