#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int h;
    int speed;
    double consumo;

    cin >> h >> speed;

    consumo = (speed / 12.0)*h;

    cout << setprecision(3) << fixed << consumo << endl;



return 0;
}

