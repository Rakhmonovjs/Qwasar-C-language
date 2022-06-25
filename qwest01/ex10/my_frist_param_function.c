#include <stdio.h>
// function will printf("detonation in... %d secondes.\n", seconds_left);
int detonation_in(int seconds_left){
    printf("detonation in... %d secondes.\n", seconds_left);
}

int main() {
 int timer = 10;

  while (timer>0) {
    detonation_in(timer);
    timer--;
  }
  return 0;
}