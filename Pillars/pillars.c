long pillars(int num_of_pillars, int distance, int width) {
  if (num_of_pillars > 1)
    return (((num_of_pillars - 1) * distance) * 100) + ((num_of_pillars - 2) * width);
  else 
    return (0);
}