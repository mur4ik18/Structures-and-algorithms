#include <stdio.h>

int main(void) {
  // algo
  // 1) if x > y: x%y
  // else: x <-> y x/y
  // 2) c == 0 ? done : continue
  // 3) x = y , y = r

  int r = 1;
  int x = 119;
  int y = 544;

  while (r != 0) {
    if (y > x) {
      int c = x;
      x = y;
      y = c;
    }
    r = x%y;
    printf("%d / %d = %i \n", x, y, r);
    if (r == 0) {
      break;
    } else {
      x = y;
      y = r;
    }
  }
  printf("%d", y);
}
