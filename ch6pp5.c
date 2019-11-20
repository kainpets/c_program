#include <stdio.h>

int main(void)
{
  int i;

  printf("Enter a number you want reversed: ");
  scanf("%d", &i);

  do
  {
    printf("%d", i % 10);
    i /= 10;
  } while (i != 0);

  printf("\n");

  return 0;
}
