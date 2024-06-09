
char *get_initials(const char *full_name, char initials[4]) {
    int i = 0;
    initials[0] = full_name[0];
    initials[1] = '.';
    initials[2] = '\0'; // Initialize to be a valid string in case no space is found

    while (full_name[i] != '\0') {
        if (full_name[i] == ' ') {
            initials[2] = full_name[i + 1];
            initials[3] = '\0'; // Null-terminate the string correctly
            break;
        }
        i++;
    }
    i = 0;
    while (initials[i] != '\0') {
      if (initials[i] >= 'a' && initials[i] <= 'z') {
        initials[i] = initials[i] - 32;
      }
      i++;
    }
    return initials;
}