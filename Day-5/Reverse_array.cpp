#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
  int start = 0;
  int end = size-1;

  while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  // print Reverse array
  cout << "Reverse Array: ";

  for(int i=0;i<size;i++){
    cout << arr[i] << " ";
  }
}

int main() {
  cout << "Welcome Day-5!" << endl;

  int arr[6] = {1,2,3,4,5,6};
  int length = sizeof(arr)/sizeof(arr[0]);

  reverseArray(arr,length);

  return 0;
}