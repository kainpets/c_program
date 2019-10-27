#include <stdio.h>

int main(void)
{
  float cash;

  printf("Enter an amount: ");
  scanf("%f", &cash);
  printf("With tax added: $%.2f", (cash * 0.05f) + cash);

  return 0;
}
