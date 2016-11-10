#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a,b;
    int duration;
    int aux;

    cin >> a >> b;

    if(a < b){
        duration = b - a;
    }
    else if(a > b){
        aux = 24 - a;
        duration = aux + b;
    }
    else{
        duration = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n",duration);

    return 0;
}
