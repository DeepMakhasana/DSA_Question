#include <iostream>
using namespace std;

// 7 9 1 2 3 in this 1 is piver

int pivotElement(int arr[], int n) {
  int s = 0,e = n-1;
  int mid = s + (e-s)/2;

  while(s<e){
    if(arr[mid] >= arr[0]){
      s = mid + 1;
    }else{
      e = mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
  
}

int main(){
  int arr[6] = {7,8,9,1,2,3};
  int ans = pivotElement(arr,6);

  cout << ans << endl;
  return 0;
}