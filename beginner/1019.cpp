#include <iostream>

using namespace std;

int main(){
    int n;
    int hours;
    int minutes;
    int seconds;

    cin >> n;

    hours = n / 60 / 60;
    minutes = (n - (hours*60*60)) / 60;
    seconds = (n - (hours*60*60 + minutes*60));

    cout << hours << ":" << minutes << ":" << seconds << endl;




return 0;
}
