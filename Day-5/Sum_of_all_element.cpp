#include <iostream>
using namespace std;

int sum(int arr[],int length){
  int sum = arr[0];
  for(int i=1;i<length;i++){
    sum += arr[i];
  }
  return sum;
}

int main(){
  // sum of all element of an array
  int arr[5] = {1,2,3,4,5};
  int length = sizeof(arr)/sizeof(arr[0]);

  cout << "Sum of element is " << sum(arr,length) << endl;
  
  return 0;
}