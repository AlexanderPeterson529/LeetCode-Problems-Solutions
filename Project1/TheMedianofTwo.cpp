#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> total = {};
        double totalSum = 0;
            for (int i = 0; i < nums1.size(); i++) {
                total.push_back(nums1[i]);
            }
            for (size_t i = 0; i < nums2.size(); i++)
            {
                total.push_back(nums2[i]);
            }
            sort(total.begin(), total.end());
            if (total.size() % 2 == 0) {
               totalSum += total[total.size()/2 - 1];
               totalSum += total[total.size()/2];

                totalSum /= 2;

                return totalSum;
            }
            else {
                return total[total.size() / 2];
            }
        return {};
    }
};
int main() {
    Solution s;

    vector<int> nums1 = { 1, 2 };
    vector<int> nums2 = { 3, 4 };

    cout << s.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}