#include <iostream>

using namespace std;

int main(){
    int x;
    int odd = 0;

    cin >> x;
    int i = x;

    while(odd < 6){
        if(i%2 != 0){
            cout << i << endl;
            odd++;
        }
        i++;
    }

    return 0;
}
