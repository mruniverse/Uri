#include <iostream>

using namespace std;

int main(){
    string trash;
    int d1,d2;
    int m1,m2;
    int h1,h2;
    int s1,s2;
    int tseconds1,tseconds2,fseconds;
    int fd,fh,fm,fs;

    cin >> trash >> d1;
    cin >> h1 >> trash >> m1 >> trash >> s1;
    cin >> trash >> d2;
    cin >> h2 >> trash >> m2 >> trash >> s2;

    tseconds1 = (h1*60*60) + (m1*60) + s1;
    tseconds2 = (h2*60*60) + (m2*60) + s2;

    if(tseconds1 > tseconds2){
        fseconds = (tseconds2 + 24*60*60) - tseconds1;
        d1++;
    }
    else if(tseconds1 == tseconds2){
        fseconds = 24*60*60;
        d1++;
    }
    else{
        fseconds = tseconds2 - tseconds1;
    }

    fh = fseconds/60/60;
    fseconds = fseconds%3600;
    fm = fseconds/60;
    fseconds = fseconds%60;
    fs = fseconds;

    fd = d2 - d1;

    cout << fd << " dia(s)" << endl;
    cout << fh << " hora(s)" << endl;
    cout << fm << " minuto(s)" << endl;
    cout << fs << " segundo(s)" << endl;

    return 0;
}
