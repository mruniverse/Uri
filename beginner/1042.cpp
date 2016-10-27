#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int a,b,c;
  int aux;

  cin >> a >> b >> c;
  int vet[3] = {a,b,c};

  for(int i = 0; i > 3; i++){
    for(int j = 0; j < 3; j++){
      if(vet[j] > vet[j+1]){
        aux = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = aux;
      }
    }
  }

  for(int i = 0; i < 3;i++){
    printf("%d\n",vet[i]);
  }
  printf("\n%d\n%d\n%d\n",a,b,c);

  return 0;
}
