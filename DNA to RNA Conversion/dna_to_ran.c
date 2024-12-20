#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna)
{
    // returned pointer must point to a freeable buffer
  char *ptr_rna = (char *)malloc(sizeof(char) * (strlen(dna) + 1));
  
  int i = 0;
  while (dna[i] != '\0') {
    ptr_rna[i] = dna[i];
    if (ptr_rna[i] == 'T')
      ptr_rna[i] = 'U';
    i++;
  }
  ptr_rna[i] = '\0';
  return (ptr_rna);
}
