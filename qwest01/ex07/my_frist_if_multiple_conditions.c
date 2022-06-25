#include <stdio.h>

int main() {
  int a = 10;
  int b = 9;
  int c = 11;
  int d = 10;
  int y = 9;
  int z = 11;

  if (a) {
    printf("a is bigger than b AND smaller than c AND equal to d\n");
  }
  if (z) {
    printf("z OR y are bigger than a\n");
  }
  return 0;
}

//   || - bu belgi yoki degan manoni beradi
// && - bu belgi esa va degan manoni beradi