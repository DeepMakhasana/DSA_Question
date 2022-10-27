#include <iostream>
#include <math.h>
using namespace std;

int main(){
  cout << "Welcome Day-4!" << endl;
  int n;
  cin >> n;

  for(int i=0;i<=30;i++){
    if(pow(2,i) == n){
      // return true;
      cout << "True";
    }
  }
  // return false;
  cout << "False";
  return 0;
}