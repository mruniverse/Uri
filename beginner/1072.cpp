#include <iostream>

using namespace std;

int main(){
    int n,x;
    int in = 0,out = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;

        if(x >= 10 && x <= 20){
            in++;
        }
        else{
            out++;
        }
    }

    printf("%d in\n%d out\n",in,out);

    return 0;
}
