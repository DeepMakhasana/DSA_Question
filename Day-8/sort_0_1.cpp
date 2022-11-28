#include <iostream>
using namespace std;

int main(){
  // INPUT
  // this is an array
  int arr[10] = {0,1,0,0,1,0,1,1,0,1};
  int size = sizeof(arr)/sizeof(arr[0]);

  int zero = 0, one = 0;

  // this loop find number of zero and one
  for(int i=0;i<size;i++){
    if(arr[i] == 0){
      zero += 1;
    }else{
      one += 1;
    }
  }

  // this loop set the value of zeros and ones
  for(int j=0;j<size;j++){
    if(j < zero){
      arr[j] = 0;
    }
    if(j >= zero){
      arr[j] = 1;
    }
  }

  // for print arr
  for(int k=0;k<size;k++){
    cout << arr[k] << " ";
  }
  // ans 0 0 0 0 1 1

  
  return 0;
}