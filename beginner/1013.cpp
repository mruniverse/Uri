#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int maiorAB,maiorAC,MAIOR;

    cin >> a >> b >> c;

    maiorAB = (a+b+abs(a-b))/2;
    maiorAC = (b+c+abs(b-c))/2;
    MAIOR =  (maiorAB+maiorAC+abs(maiorAB-maiorAC))/2;

    cout << MAIOR << " eh o maior" << endl;

return 0;}
