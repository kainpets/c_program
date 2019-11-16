#include <stdio.h>

int main(void)
{
  int m, n, divisor;
  printf("Enter two integers: ");
  scanf("%d%d", &m, &n);

  while (n != 0) {
    divisor = m % n;
    m = n;
    n = divisor;
}

  printf("Greatest common divisor is: %d", m);

  return 0;
}
