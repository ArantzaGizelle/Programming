#include <stdio.h>
int main() {
  float x = 1.842;
  int y = 15;
  while (x <= y) {
    x = x / 3;
    y = y * x;
  }
  printf("%.2f, %d\n", x, y);
}