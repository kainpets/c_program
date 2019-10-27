#include <stdio.h>

int main(void)
{
  int x;

  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("The value of (3x to the power of 5) + (2x to the power of 4) - (5x to the power of 3) - (x squared) + 7x -6 is: %d", (3 *(x * x * x * x * x) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) -6));


  return 0;
}
