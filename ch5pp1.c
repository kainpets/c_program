#include <stdio.h>

int main(void)
{
  int num = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num >= 0 && num <= 9) {
    printf("The number %d has 1 digit", num);
  }
  else if (num >= 10 && num <= 99) {
    printf("The number %d has 2 digits", num);
  }
  else if (num >= 100 && num <= 999) {
    printf("The number %d has 3 digits", num);
  }
  else {
    printf("The number %d has 4 digits", num);
    }

  return 0;
}
