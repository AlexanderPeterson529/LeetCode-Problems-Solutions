#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> total = {};
        int totalSum = 0;
        if(nums1[0] > nums2[nums2.size()-1]){
            for(int i = 0; i < nums2.size();i++){
                total.push_back(nums2[i]);
            }
            for (size_t i = 0; i < nums1.size(); i++)
            {
                   total.push_back(nums1[i]);
            }
            for (size_t i = 0; i < total.size(); i++)
            {
                totalSum += total[i];
            }
            totalSum /= total.size();
            return totalSum;
        }
        else{
            for(int i = 0; i < nums1.size();i++){
                total.push_back(nums1[i]);
            }
            for (size_t i = 0; i < nums2.size(); i++)
            {
                   total.push_back(nums2[i]);
            }
            sort(total.begin(),total.end());
            if (total.size() % 2 == 0){
                for (size_t i = 0; i < total.size(); i++)
                {
                    totalSum += total[i];
                }

                totalSum /= total.size();
            
                return totalSum;  
            }
            else{
                return total[total.size()/2-1];
            }
        }
        return {};
    }
};
int main() {
    Solution s;

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    cout << s.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}