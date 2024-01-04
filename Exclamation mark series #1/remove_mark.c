char *remove_mark (char *string)
{
	int i;
  
  i = 0;
  while (string[i] != '\0')
    i++;
  if (i > 0)
    if (string[i - 1] == '!')
      string[i - 1] = '\0';
	return string;
}