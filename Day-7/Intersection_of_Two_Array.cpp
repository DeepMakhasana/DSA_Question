#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i] == nums2[j]){
                for(int k=0;k<ans.size();k++){
                    if(nums1[i] == ans[k]){
                        ans.erase(ans.begin()+k);
                    }
                }
                ans.push_back(nums1[i]);
                nums2[j] = -112233;
                break;
            }
        }
    }
    return ans;
}


int main(){
  vector<int> arr1 = {4,9,5};
  vector<int> arr2 = {9,4,9,8,4};

  vector<int> ans = intersection(arr1,arr2);
  for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
  }
}