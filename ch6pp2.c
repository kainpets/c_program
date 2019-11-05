#include <stdio.h>

int main(void)
{
  int m, n, divisor;
  // change the loop into a for loop?
  do {
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    if (n == 0) {
      printf("%d is the greatest common divisor", m);
      break;
    }
    printf("modulo = %d", (m % n));
  } while(n > 0);


  return 0;
}
