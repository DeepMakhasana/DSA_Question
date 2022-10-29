#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int find) {
  for(int i=0;i<size;i++){
    if(arr[i] == find)
      return 1;
  }
  return 0;
}

int main() {
  cout << "Welcome Day-5!" << endl;

  int arr[5] = {2,6,4,8,5};
  int find;
  int length = sizeof(arr)/sizeof(arr[0]);

  cout << "Enter the find value: ";
  cin >> find;

  bool ans = linearSearch(arr, length, find);

  if(ans){
    cout << "This value is exist" << endl;
  }else {
    cout << "This value is not exist" << endl;
  }

  return 0;
}