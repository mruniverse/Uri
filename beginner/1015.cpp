#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double x1,x2;
    double y1,y2;
    double resultado;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    resultado = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    cout << setprecision(4) << fixed << resultado << endl;

    return 0;
}
