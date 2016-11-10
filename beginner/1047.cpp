#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a,b,c,d;
    int duration,minutes;
    int minutes1,minutes2;

    cin >> a >> b >> c >> d;

    minutes1 = (a*60)+b;
    minutes2 = (c*60)+d;

    if(minutes1 < minutes2){
        duration = minutes2 - minutes1;

        minutes = duration%60;
        duration = duration/60;
    }
    else if(minutes1 > minutes2){
        duration = ((24*60)-minutes1) + minutes2;

        minutes = duration%60;
        duration = duration/60;
    }
    else{
        duration = 24;
        minutes = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration,minutes);

    return 0;
}
