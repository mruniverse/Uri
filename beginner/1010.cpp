#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int code,n; double price;
    int code2,n2; double price2;

    cin >> code >> n >> price;
    cin >> code2 >> n2 >> price2;

    double total = (n * price)+(n2 * price2);

    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << total << endl;


return 0;}
