#include <iostream>
using namespace std;

int main() {
  cout << "Welcome Day-5!" << endl;

  // 1). Running Sum of 1d Array
  // Example 1:

  // Input: nums = [1,2,3,4]
  // Output: [1,3,6,10]
  // Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
  // ===>
  
    int nums[4] = {1,2,3,4};

    int ans = 0;
    
    for(int i = 0; i<(sizeof(nums) / sizeof(nums[0]));i++){
        ans += nums[i];
        nums[i] = ans;
    }

    // show answer
    for(int j=0;j<(sizeof(nums) / sizeof(nums[0]));j++){
      cout << nums[j] << " ";
    }
    cout<<endl;
    return 0;
}