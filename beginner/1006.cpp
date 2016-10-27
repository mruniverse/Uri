#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A,A2;
    double B,B2;
    double C,C2;
    double media;
    cin >> A;
    cin >> B;
    cin >> C;

    A2 = A * 2;
    B2 = B * 3;
    C2 = C * 5;
    media = ( A2 + B2 + C2 ) / 10;

    cout << "MEDIA = " << setprecision(1) << fixed << media << endl;


    return 0;
}
