#include <iostream>
using namespace std;

int firstOccu(int arr[], int size, int key){
  int s = 0, e = size-1;
  int mid = (s+e)/2;
  int ans = -1;

  while(s <= e){
    if(arr[mid] == key){
      ans = mid;
      e = mid-1;
    } else if(arr[mid] > key){
      e = mid - 1;
    } else if(arr[mid] < key){
      s = mid + 1;
    }
    mid = (s+e)/2;
  }

  return ans;
}

int lastOccu(int arr[], int size, int key){
  int s = 0, e = size-1;
  int mid = (s+e)/2;
  int ans = -1;

  while(s <= e){
    if(arr[mid] == key){
      ans = mid;
      s = mid+1;
    } else if(arr[mid] > key){
      e = mid - 1;
    } else if(arr[mid] < key){
      s = mid + 1;
    }
    mid = (s+e)/2;
  }

  return ans;
}

int main(){
  int arr[10] = {0,1,2,2,3,3,3,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  int key = 3;
  
  int ans = firstOccu(arr, size, key);
  int ans2 = lastOccu(arr, size, key);
  cout << "First Occurrance: " << ans << endl;
  cout << "Last Occurrance: " << ans2 << endl;

  return 0;
}