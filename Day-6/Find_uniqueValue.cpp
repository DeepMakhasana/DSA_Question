#include <iostream>
using namespace std;

int findUnique(int arr[], int size){
  int match=0;
  for(int i=0;i<size;i++){
    match = match^arr[i];
  }
  return match;
}

void findTowUniqueElement(int arr[], int size){
  int result = 0;
  for(int i=0;i<size;i++){
    result = result ^ arr[i];
  }
  int tem = 0;
  for(int j=0;j<size;j++){
    tem = tem | arr[j]; 
  }
  int a = result ^ tem;
  int b = a ^ tem;

  cout << a << " " << b << endl;
}

int main(){
  // Quesion 1
  // int arr[5] = {3,1,9,3,1};
  // int length = sizeof(arr)/sizeof(arr[0]);

  // cout << "Unique value: " << findUnique(arr,length) << endl;

  // Quesion 2
  int array[6] = {4,3,5,6,3,4};
  int size = sizeof(array)/sizeof(array[0]);

  findTowUniqueElement(array,size);

  return 0;
}