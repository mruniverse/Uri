#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string nome;
    double b;
    double c;
    double salario;
    cin >> nome;
    cin >> b;
    cin >> c;
    salario = b + (c * 15/100);
    cout << "TOTAL = R$ " << setprecision(2) << fixed << salario << endl;

return 0;
}
