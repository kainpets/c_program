#include <stdio.h>

int main(void)
{
  float largest = 0, current;

   do {
    printf("Enter a number: ");
    scanf("%f", &current);

    if (current > largest) {
      largest = current;
    }
  } while (current > 0);
  printf("The largest entered number was %f", largest);

  return 0;
}
