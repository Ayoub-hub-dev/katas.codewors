double find_average(const double array[/* length */], unsigned length)
{
	if (length == 0)
    return (0);
  
  unsigned i = 0;
  double  result = 0;
  
  while (i < length) {
    result =  result + array[i];
    i++;
  }
  return (result / length);
}