#include <stdlib.h>
const char* elevator(int left, int right, int call) {
  return abs(call - left) < abs(call - right) ? "left" : "right";
}
/*
#include <stdio.h>
int main()
{
    int     left;
    int     right;
    int     call;

    // You can change it
    left = 0;
    right = 0
    call = 0;

    printf("%s", elevator(left, right, call));
    retrun (0);
}*/