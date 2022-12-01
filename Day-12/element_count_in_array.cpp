#include <iostream>
using namespace std;

int fristOccurence(int arr[], int n, int key){
  int s=0,e=n-1;
  int ans = -1;

  while(s<=e){
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
      ans = mid;
      e = mid-1;
    }else if(arr[mid] < key){
      s = mid+1;
    }else{
      e = mid-1;
    }
  }
  return ans;
}
int lastOccurence(int arr[], int n, int key){
  int s=0,e=n-1;
  int ans = -1;

  while(s<=e){
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
      ans = mid;
      s = mid+1;
    }else if(arr[mid] < key){
      s = mid+1;
    }else{
      e = mid-1;
    }
  }
  return ans;
}

int countOfSortedArray(int arr[], int n, int key){
  int fristOccu = fristOccurence(arr,n,key);
  int lastOccu = lastOccurence(arr,n,key);
  int result = (lastOccu - fristOccu) + 1;
  return result;
}

int main(){
  int arr[10] = {1,4,8,8,8,8,8,9,11,13};
  int key = 8;
  int ans = countOfSortedArray(arr,10,key);

  cout << "Number of element is " << ans << endl;
  return 0;
}