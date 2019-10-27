// calculate the dimensional weight of a 12"
// x 10" x 8" box

#include <stdio.h>
#define CONST1 165
#define CONST2 166

int main(void)
{
int height = 8, length = 12, width = 10, volume;

volume = height * length * width;


printf("Dimensions: %dx%dx%d\n", length, width, height);
printf("Volume (cubic inches): %d\n", volume);
printf("Dimensional weight (pounds): %d\n", (volume + CONST1) / CONST2);

return 0;
}
