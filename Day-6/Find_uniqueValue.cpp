#include <iostream>
using namespace std;

int findUnique(int arr[], int size){
  int match=0;
  for(int i=0;i<size;i++){
    match = match^arr[i];
  }
  return match;
}

int main(){
  int arr[5] = {3,1,9,3,1};
  int length = sizeof(arr)/sizeof(arr[0]);

  cout << "Unique value: " << findUnique(arr,length) << endl;

  return 0;
}