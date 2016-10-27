#include <iostream>

using namespace std;

int main(){
   int age;
   int years;
   int months;
   int days;

   cin >> age;

   years = age / 365;
   months = (age - (years * 365)) / 30;
   days = (age - (years * 365)) - ( months * 30);

   cout << years << " ano(s)" << endl;
   cout << months << " mes(es)" << endl;
   cout << days << " dia(s)" << endl;

return 0;
}
