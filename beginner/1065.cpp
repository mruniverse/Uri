#include <iostream>

using namespace std;

int main(){
    int n;
    int aux = 0;

    for(int i = 0;i < 5; i++){
        cin >> n;
        if(n%2 == 0){
            aux++;
        }
    }

    printf("%d valores pares\n",aux);

    return 0;
}
