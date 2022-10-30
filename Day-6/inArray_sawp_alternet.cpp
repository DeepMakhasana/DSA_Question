#include <iostream>
using namespace std;

int swapAlternet(int arr[], int length){
  int index = 0;

  while(index<length){
    int start = index;
    int end = index + 1;

    if(end < length){
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      // swap(arr[start],arr[end]);
    }
    index += 2;
  }

  return 0;
}

int main(){
  cout << "Welcome Day-6!" << endl;
  // int arr[5] = {1,2,3,4,5};
  int arr[6] = {1,2,3,4,5,6};
  int length = sizeof(arr)/sizeof(arr[0]);
  
  swapAlternet(arr,length);

  //show Alternet array
  for(int i=0;i<length;i++){
    cout << arr[i] << " ";
  }
  cout<<endl;
  
  return 0;
}