#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int a,b;

  cin >> a >> b;

  if(a%2 == 0 && b%2 == 0){
    printf("Sao Multiplos\n");
  }
  else if(a%3 == 0 && b%3 == 0){
    printf("Sao Multiplos\n");
  }
  else if(a%5 == 0 && b%5 == 0){
    printf("Sao Multiplos\n");
  }
  else{
    printf("Nao sao Multiplos\n");
  }

  return 0;
}
