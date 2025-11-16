#include <stdio.h>

int main(void) {
  int length, breadth, area, perimeter;

  printf("Enter the length of the rectangle: ");
  scanf("%d", &length);

  printf("Enter the breadth of the rectangle: ");
  scanf("%d", &breadth);

  perimeter = 2 * (length + breadth);

  area = length * breadth;

  printf("The perimeter of the rectangle is: %d\n", perimeter);
  printf("The area of the rectangle is: %d\n", area);

  return 0;
}
