#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    int b;
    double c;
    double salary;
    cin >> a;
    cin >> b;
    cin >> c;
    salary = b * c;
    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << setprecision(2) << fixed << salary << endl;




return 0;}
