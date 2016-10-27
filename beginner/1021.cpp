#include <iostream>

using namespace std;

int main(){
  int x;
  double x2;
  int ncem; int mcem;
  int ncinquenta; int mcinquenta;
  int nvinte; int mvinte;
  int ndez; int mdez;
  int ncinco; int mcinco;
  int ndois; int mum;

  cin >> x2;

  x = x2 * 100;

  ncem = x/10000;
  x = x%10000;
  ncinquenta = x/5000;
  x = x%5000;
  nvinte = x/2000;
  x = x%2000;
  ndez = x/1000;
  x = x%1000;
  ncinco = x/500;
  x = x%500;
  ndois = x/200;
  x = x%200;

  cout << "NOTAS:" << endl;
  cout << ncem << " nota(s) de R$ 100.00" << endl;
  cout << ncinquenta << " nota(s) de R$ 50.00" << endl;
  cout << nvinte << " nota(s) de R$ 20.00" << endl;
  cout << ndez << " nota(s) de R$ 10.00" << endl;
  cout << ncinco << " nota(s) de R$ 5.00" << endl;
  cout << ndois << " nota(s) de R$ 2.00" << endl;

  mcem = x/100;
  x = x%100;
  mcinquenta = x/50;
  x = x%50;
  mvinte = x/25;
  x = x%25;
  mdez = x/10;
  x = x%10;
  mcinco = x/5;
  x = x%5;
  mum = x;

  cout << "MOEDAS:" << endl;
  cout << mcem << " moeda(s) de R$ 1.00" << endl;
  cout << mcinquenta << " moeda(s) de R$ 0.50" << endl;
  cout << mvinte << " moeda(s) de R$ 0.25" << endl;
  cout << mdez << " moeda(s) de R$ 0.10" << endl;
  cout << mcinco << " moeda(s) de R$ 0.05" << endl;
  cout << mum << " moeda(s) de R$ 0.01" << endl;

  return 0;
}
