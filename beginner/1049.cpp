#include <iostream>

using namespace std;

int main(){
    string a,b,c;

    cin >> a;

    if(a == "vertebrado"){
        cin >> b;
        if(b == "ave"){
            cin >> c;
            if(c == "carnivoro"){
                cout << "aguia" << endl;
            }
            else{
                cout << "pomba" << endl;
            }
        }
        else{
            cin >> c;
            if(c == "onivoro"){
                cout << "homem" << endl;
            }
            else{
                cout << "vaca" << endl;
            }
        }
    }
    else{
        cin >> b;
        if(b == "inseto"){
            cin >> c;
            if(c == "hematofago"){
                cout << "pulga" << endl;
            }
            else{
                cout << "lagarta" << endl;
            }
        }
        else{
            cin >> c;
            if(c == "hematofago"){
                cout << "sanguessuga" << endl;
            }
            else{
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
