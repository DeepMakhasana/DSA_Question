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

  // n = 5 101 010

  int power = 1;
  int ans = 0;

  while(n!=0){
    int bit = n&1;
    if(bit == 0){
      ans += power;
    }
    power= power * 2;
    n = n >> 1;
  }

  cout << "complement is " << ans;

    return 0;
}