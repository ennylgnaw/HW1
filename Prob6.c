#include <stdio.h>
#include <stdlib.h>

int sumSquareDiff() {
  int sumSquares = 0; //sum of squares
  int sum = 0;
  for(int i = 1; i <= 100; i++) {
    sum += i;
    sumSquares += (i*i);
  }
  int squareSum = sum * sum; //square of the sum
  int diff = squareSum - sumSquares;
  return diff;
}

int main() {
  int n = sumSquareDiff();
  printf("%d", n);
  return 0;
}
