#include <iostream>
#include <math.h>
using namespace std;

int main(){
  cout << "Welcome!" << endl;
// 1).Subtract the Product and Sum of Digits of an Integer

// Given an integer number n, return the difference   between the product of its digits and the sum of its digits.
 
// Example 1:

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15

// ---->
      // int n = 234; // Input
      // cout << "Enter the n value: ";
      // cin >> n;
    
      // int product = 1;
      // int sum = 0;
      
      // while(n != 0){
      //   int digit = n%10;
      //   product *= digit;
      //   sum += digit;
      //   n /= 10;
      // }
    
      // int answer = product -sum;
      // cout << product << " - " << sum << " = " << answer<< endl;
    
      // cout << "Answer : " << answer << endl;

// ===========================================================

  
// 2). Number of 1 Bits
// Write a function that takes an unsigned integer and returns the number of '1' bits it has 

// Example 1:

// Input: n = 00000000000000000000000000001011
// Output: 3
// Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.
// ---->

  // uint32_t n = 00000000000000000000000000001011;

  // int count = 0;

  // while(n != 0){
  //   if(n&1){
  //     count++;
  //   }
  //   n = n>>1;
  // }

  // cout << count;
// ===========================================================



  
  
  return 0;
}