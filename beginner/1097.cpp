#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int a = 1,b = 7;

  while (a <= 9 && b <= 15) {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 3; j++) {
        printf("I=%d J=%d\n", a, b);
        b -= 1;
      }
      b += 5;
      a += 2;
    }
  }

  return 0;
}
