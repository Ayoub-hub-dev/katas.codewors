char *capitalize_word (char *word)
{
  int	i;

  i =	0;
  while (word[i] != '\0')
    i++;
 
  char	*ptr;

  ptr = (char *)malloc(i);
 
  i =	0;
  while (word[i] != '\0')
  {
    ptr[i] = word[i];
    i++;
  }
  ptr[i] = '\0';
  if (ptr[0] >= 'a' && ptr[0] <= 'z')
  {
    ptr[0] = toupper(ptr[0]);
  }
  return (ptr);
}
