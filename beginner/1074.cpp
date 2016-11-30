#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;
    int x[n];

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    for(int i = 0; i < n; i++){

        if(x[i] > 0){
            if(x[i]%2 == 0){
                cout << "EVEN POSITIVE" << endl;
            }
            else{
                cout << "ODD POSITIVE" << endl;
            }
        }

        else if(x[i] < 0){
            if(x[i]%2 == 0){
                cout << "EVEN NEGATIVE" << endl;
            }
            else{
                cout << "ODD NEGATIVE" << endl;
            }
        }

        else{
            cout << "NULL" << endl;
        }
    }

    return 0;
}
