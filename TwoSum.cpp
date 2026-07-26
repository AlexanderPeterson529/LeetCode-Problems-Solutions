#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target){
        int n = 0;
        while (n < nums.size()){
            for(int i = n + 1; i < nums.size(); i++){
                if (nums[i] + nums[n] == target){
                    return {n,i};
                }
            }
            n++;
        }
        return {};
    }     
};  

int main() {
	Solution solution;
    vector<int> nums = { 1,2,3,4 };
    int target = 6;
	cout << solution.twoSum(nums, target)[0] << endl;
    return 0;
}