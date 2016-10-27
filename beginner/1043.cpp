#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    float a,b,c,area;

    cin >> a >> b >> c;

    if((abs(b - c)) < a && a < (b + c) ||\
    (abs(a - c)) < b && b < (a + c) ||\
    (abs(a - b)) < c && c < (a + b)){
      printf("Perimetro = %.1f\n",a + b + c);
    }
    else{
      area = ( (a+b)*c )/2;
      printf("Area = %.1f\n",area);
    }

  return 0;
}
