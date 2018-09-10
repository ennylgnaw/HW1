#include <stdio.h>
#include <stdlib.h>

int mult35() {
  int sum;
  int mult3;
  int mult5;
  int multBoth;

  //sum of multiples of 3
  while (mult3 < 1000) {
    sum += mult3;
    mult3 += 3;
  }

  //sum of multiples of 5
  while (mult5 < 1000) {
    sum += mult5;
    mult5 += 5;
  }

  //sum of multiples of 3 and 5, minus overlapping multiples (of 15)
  while (multBoth < 1000) {
    sum -= multBoth;
    multBoth += 15;
  }
  
  return sum;
}

int main() {
  int n = mult35();
  printf("%d", n);
  return 0;
}
