int points(const char* const games[10]) {
  int   i;
  int   score;
  
  i = 0;
  score = 0;
  while (games[i] != '\0' && i < 10)
  {
    if (games[i][0] > games[i][2])
      score += 3;
    else if (games[i][0] == games[i][2])
      score += 1;
    i++;
  }
}