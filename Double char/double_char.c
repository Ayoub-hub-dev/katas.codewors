char *double_char (const char *string, char *doubled)
{
  int k=0,i=0;
  while (string[i]!='\0'){
    doubled[k++]=string[i];
    doubled[k++]=string[i++];
  }
  doubled[k]='\0';
  return doubled;
}