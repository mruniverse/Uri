#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
  double a,b,c;
  double delta,x1,x2;

  cin >> a >> b >> c;

  delta = (b*b) - (4*a*c);

    if (delta < 0 || a <= 0){
      printf("Impossivel calcular\n");
      return 0;
    }

  x1 = ((-b) - sqrt((b*b) - (4*a*c)))/(2*a);
  x2 = ((-b) + sqrt((b*b) - (4*a*c)))/(2*a);

  printf("R1 = %.5f\n",x2);
  printf("R2 = %.5f\n",x1);

  return 0;
}
