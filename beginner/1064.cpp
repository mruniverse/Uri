#include <iostream>

using namespace std;

int main(){
    double value;
    double avrg = 0;
    int aux = 0;

    for(int i = 0; i < 6; i++){
        cin >> value;
        if(value >= 0){
            aux++;
            avrg = avrg + value;
        }
    }

    avrg = avrg/aux;

    cout << aux << " valores positivos" << endl;
    printf("%.1f\n",avrg);

    return 0;
}
