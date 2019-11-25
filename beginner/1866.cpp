#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int cases, n, result;

  cin >> cases;

  for (size_t i = 0; i < cases; i++) {
    cin >> n;
    if(n%2 == 0){
      result = 0;
    }
    else{
      result = 1;
    }
    cout << result << endl;
  }

  return 0;
}
