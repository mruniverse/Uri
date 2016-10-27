#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x,x2;
    double y,y2;
    double media;
    double weightA;
    double weightB;
    double totalweight;
    weightA = 3.5;
    weightB = 7.5;
    totalweight = weightA + weightB;

    cin >> x;
    x2 = x * weightA;
    cin >> y;
    y2 = y * weightB;
    media = (x2 + y2) / totalweight;

    cout << "MEDIA = " << setprecision(5) << fixed << media << endl;

    return 0;

}
