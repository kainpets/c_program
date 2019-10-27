# include <stdio.h>
# define PI 3.14
# define FORMULA 4.0f / 3.0f

int main(void)
{
  float radius;
  printf("Enter the radius: ");
  scanf("%f", &radius);
  printf("The volume of a sphere is: (%f)", (radius * radius * radius) * (FORMULA) * PI);

  return 0;
}
