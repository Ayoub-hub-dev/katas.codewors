char *whatday(int num) {
  char *weekday[] = {"","Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  if (num >= 1 && num <= 7)
    return (weekday[num]);
  else
    return ("Wrong, please enter a number between 1 and 7");
}