#include <stdio.h>

int main(void)
{
  int i;

  printf("Enter a two-digit number: ");
  scanf("%d", &i);
  printf("The reversal is: %d%d%d", i % 10, i / 10 % 10, i / 100 );

  return 0;
}
