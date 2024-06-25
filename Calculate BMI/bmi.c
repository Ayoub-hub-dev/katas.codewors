/*    N.B. do not allocate memory,
   instead: return a string literal  */

const char *bmi (int weight, double height)
{
  if (weight / (height * height) <= 18.5) // (weight / pow(height, 2))
    return "Underweight";
  else if ((weight / (height * height) <= 25.5))
	  return "Normal";
  else if ((weight / (height * height) <= 30.0))
	  return "Overweight";
  return "Obese";
}