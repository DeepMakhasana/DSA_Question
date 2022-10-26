#include <iostream>
#include <math.h>
using namespace std;

int main(){
  cout << "Welcome Day-3!" << endl;

  // 1). Binary to Decimal convesion
  // Example : 
  //   n = 101
  //   Answer = 5
  // ---->

      // int n;
      // cout << "Enter the binary number: ";
      // cin >> n;
    
      // int i = 0;
      // int ans = 0;
      // while(n != 0){
      //   int digit = n%10;
      //   if(digit == 1){
      //     ans = ans + pow(2, i);
      //   }
      //   n /= 10;
      //   i++;
      // }
      // cout << "Decimal Number is " << ans;

  // 2). Decimal to Binary convesion
  // Example : 
  //   n = 5
  //   Answer = 101
  // ---->

  int n;
  cout << "Enter the Decimal number: ";
  cin >> n;

  int i=0;
  long long int ans=0;
  while(n!=0){
    int bit = n&1;

    if(bit == 1){
      ans = ans + (bit * pow(10,i));
    }

    n = n >> 1;
    i++;
  }

  cout << ans << endl;
  
  return 0;
}