#include <iostream>

using namespace std;

int main(){
    double salary,tax;
    cin >> salary;

    if(salary >= 0 && salary <= 2000){
        cout << "Isento" << endl;
    }
    else if(salary > 2000 && salary <= 3000){
        tax = (salary - 2000)*(8.0/100);
        printf("R$ %.2f\n",tax);
    }
    else if(salary > 3000 && salary <= 4500){
        tax = 80 + (salary - 3000)*(18.0/100);
        printf("R$ %.2f\n",tax);
    }
    else if(salary > 4500){
        tax = 80 + 270 + (salary - 4500)*(28.0/100);
        printf("R$ %.2f\n",tax);
    }

    return 0;
}
