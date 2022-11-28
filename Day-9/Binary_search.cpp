#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int findingValue){
  int start = 0;
  int end = size-1;

  int mid = (start+end)/2;
  // return arr[mid];

  while(start<=end){
    if(arr[mid] == findingValue){
      return mid;
    }
    if(arr[mid] > findingValue){
      end = mid - 1;
    }else {
      start = mid + 1;
    }
    mid = (start+end)/2;
  }
  return -1;
}

int main(){
  int odd[5] = {1,2,3,4,5};
  int even[6] = {1,2,3,4,5,6};

  int sizeOfOdd = sizeof(odd)/sizeof(odd[0]);
  int sizeOfEven = sizeof(even)/sizeof(even[0]);

  int findingValue = 6;

  int answer = binarySearch(even, sizeOfEven, findingValue);

  cout << answer << endl;
}