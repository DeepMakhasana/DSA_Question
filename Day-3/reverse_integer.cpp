#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){

  // 1). Reverse Integer
  // Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

  // case 1:
  //   Input: x = 123
  //   Output: 321

  // ---->
  int n;
  cout << "Enter the Digit: ";
  cin >> n;

  int ans = 0;
  bool condition = true;
  
  while(n!=0){
    int digit = n%10;
    if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
      condition = false;
      cout << "This is outof range." << endl;
    }
    ans = (ans*10)+digit;
    n /= 10;
  }

  if(condition){
    cout << "Reverse Integer: " << ans << endl;
  }
  
  return 0;

}