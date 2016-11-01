#include <iostream>

using namespace std;

int main(){
  double vet[3],aux;
  int c;

  for(c = 0; c < 3; c++){
    cin >> vet[c];
  }

  for(int i = 0; i < 3; i++){
    for(int j = 3; j > 0; j--){
      if(vet[j] > vet[j-1]){
        aux = vet[j];
        vet[j] = vet[j-1];
        vet[j-1] = aux;
      }
    }
  }

  if(vet[0] >= (vet[1] + vet[2])){
    cout << "NAO FORMA TRIANGULO" << endl;
  }
      else if((vet[0]*vet[0]) == (vet[1]*vet[1]) + (vet[2]*vet[2])){
        cout << "TRIANGULO RETANGULO" << endl;
      }
      else if((vet[0]*vet[0]) > (vet[1]*vet[1]) + (vet[2]*vet[2])){
        cout << "TRIANGULO OBTUSANGULO" << endl;
      }
      else if((vet[0]*vet[0]) < (vet[1]*vet[1]) + (vet[2]*vet[2])){
        cout << "TRIANGULO ACUTANGULO" << endl;
      }
  if(vet[0] == vet[1] && vet[0] == vet[2]){
    cout << "TRIANGULO EQUILATERO" << endl;
    return 0;
  }
      else if(vet[0] == vet[1] || vet[0] == vet[2] || vet[1] == vet[2]) {
        cout << "TRIANGULO ISOSCELES" << endl;
      }

  return 0;
}
