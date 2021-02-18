#include <stdio.h>
int main() {
  int i;
  for (i = 55; i >= 13; i = i - 8);
  printf("%d\n", i);
}