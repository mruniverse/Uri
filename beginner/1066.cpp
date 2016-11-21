#include <iostream>

using namespace std;

int main(){
    int n,negative = 0,positive = 0,even = 0,odd = 0;

    for(int i = 0; i < 5; i++){
        cin >> n;
        if(n%2 == 0){
            even++;
        }
        if(n%2 != 0){
            odd++;
        }
        if(n < 0){
            negative++;
        }
        if(n > 0){
            positive++;
        }
    }

printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es)"
       " postivo(s)\n%d valor(es) negativo(s)\n",even,odd,positive,negative);

    return 0;
}
