#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int n, weight[3]={2,3,5};
  float num[3];

// The entries
//  cout << "Type the number of lines: ";
  cin >> n; float avg[n];

  for(int i = 0; i < n; i++){
    for (int j = 0; j < 3; j++) {
      cin >> num[j];
    }
    //Calculus
    avg[i] = ((num[0]*weight[0]) + (num[1]*weight[1]) + (num[2]*weight[2]))/10.0;
  }

  for (int i = 0; i < n; i++) {
    printf("%.1f\n", avg[i]);
  }

  return 0;
}
