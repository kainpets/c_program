#include <stdio.h>

int main(void)
{
  float balance = 0.0f, interest_rate = 0.0f, monthly_payment = 0.0f;

  printf("Enter amount of loan: ");
  scanf("%f", &balance);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter montlhy payment: ");
  scanf("%f", &monthly_payment);

  printf("Balance remaining after first payment: $%.2f\n", (balance - monthly_payment) + (balance * (interest_rate / 100 / 12)));
  balance = (balance - monthly_payment) + (balance * (interest_rate / 100 / 12));

  printf("Balance remaining after second payment: $%.2f\n", (balance - monthly_payment) + (balance * (interest_rate / 100 / 12)));
  balance = (balance - monthly_payment) + (balance * (interest_rate / 100 / 12));

  printf("Balance remaining after third payment: $%.2f\n", (balance - monthly_payment) + (balance * (interest_rate / 100 / 12)));


  return 0;
}
