void letters_range (char letters[26 + 1], const char range[3 + 1])
{
    char firstLetter = range[0], lastLetter = range[2];
    int i = 0;
  
    while (firstLetter <= lastLetter)
    {
        letters[i] = firstLetter;
        i++;
        firstLetter++;
    }
	letters[i] = '\0';
}