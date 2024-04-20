#include<stdio.h>
char *capitalize_word(char *word)
{
  if (word[0] >= 'a' && word[0] <= 'z')
    word[0] = word[0] - 32;
  return word;
}
int main()
{
	char name[] = "ayoub";
	char *modifide = capitalize_word(name);
	printf("%s\n", modifide);
	return(0);
}
