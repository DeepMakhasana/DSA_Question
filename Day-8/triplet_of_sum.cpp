#include <iostream>
using namespace std;

int main(){
  // INPUT
  // this is an array
  int arr[5] = {1,2,3,4,5};
  // this is sum
  int sum = 7;
  // what are the elements sum is equal to SUM those all element return as answer.

  // Solution :
  int size = sizeof(arr)/sizeof(arr[0]);
  int ans = true;
  
  for(int i=0;i<size;i++){
    for(int j=i+2;j<size;j++){
      if((arr[i] + arr[i+1] + arr[j]) == sum) {
        ans = false;
        cout << arr[i] << arr[i+1] << arr[j] << endl;
      }
    }
  }

  if(ans) {
    cout << "The sum element is not exsist.";
  }

  return 0;
}