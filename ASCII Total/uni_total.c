
int uni_total(const char *s) {
  int unit_total;
  
  unit_total = 0;
  
  while (*s) {
    unit_total = unit_total + (*s - 0);
    s++;
  }
  return (unit_total);
}