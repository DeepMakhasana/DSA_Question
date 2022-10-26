#include <iostream>
#include <math.h>
using namespace std;

int main(){
  cout << "Welcome Day-3!" << endl;

  // 2). complement of base 10 integer

// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
  // Input: n = 5
  // Output: 2
  // Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in Decimal.

  int n;
  cin >> n;

  int ans = 0;
  int i = 0;
  while (n!=0){
    int bit = n&1;
    if(bit == 1){
      ans = ans + (bit*(pow(10,i)));
    }
    n = n >> 1;
    i++;
  }
  cout << ans << endl;
  
  // int flip = 0;
  // while(ans!=0){
  //   int digit = ans%10;
  //   if(digit == 1){
  //     flip = flip*10+digit;
  //   }
    
  //   flip /= 10;
  // }
  // cout << ans << endl;
  // cout << flip;


    return 0;
}