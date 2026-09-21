#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;

    int n = nums.size();

    while(left < right) {
        int pairSum = nums[left] + nums[right];
        if(pairSum > target) {
            right--;
        } else if(pairSum < target){
            left++;
        }
        else {
            ans.push_back(left);
            ans.push_back(right);
            return ans;
        }
    }
    return ans;
}


int main() {
vector<int> nums = {2, 7, 11, 15};
int target = 9;

vector<int> ans = pairSum(nums, target);
cout << ans[0] << ", " << ans[i] << endl;
    return 0;
}

// output 9
//time O(n);


// First approch brute force

// vector<int> pairSum(vocter<int> nums, int target) {
//     vocter<int> ans;
//     int n = nums.size();

//     for(int i = 0; i < n; i++) {
//         for(int j = i+1; j < n; j++){
//             if(num[i] + num[j] === target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans
// }
