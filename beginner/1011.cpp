#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r;
    double pi = 3.14159;
    double area;

    cin >> r;

    area = (4/3.0) * pi * (r*r*r);

    cout << "VOLUME = " << setprecision(3) << fixed << area << endl;

return 0;}
