#include <stdio.h>

int main(void)
{
  float income;

  printf("Enter your income: ");
  scanf("%f", &income);

  if (income < 750) {
    printf("Tax amount: %.2f $", (income * 0.01));
  }
  else if (income < 3750) {
    printf("Tax amount: %.2f $", 7.50 + (income - 750) * 0.02);
  }
  else if (income < 5250) {
    printf("Tax amount: %.2f $", 82.50 + (income - 3750) * 0.04);
}
  else if (income < 7000) {
      printf("Tax amount: %.2f $", 142.50 + (income - 5250) * 0.05);
  }
  else {
    printf("Tax amount: %.2f $", 230 + (income - 7000) * 0.06);
  }
  return 0;
}
