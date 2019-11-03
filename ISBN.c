#include <stdio.h>

int main(void)
{
  int prefix, groupIdentifier, publisherCode, itemNumber, checkDigit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);
  printf("GS1 prefix: %d\n", prefix);
  printf("Group identifier: %d\n", groupIdentifier);
  printf("Publisher cide: %d\n", publisherCode);
  printf("Item number: %d\n", itemNumber);
  printf("Check digit: %d\n", checkDigit);

  return 0;
}
