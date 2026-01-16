#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> kq1 = sol.twoSum(nums1, target1);
    cout << "Output: [" << kq1[0] << ", " << kq1[1] << "]" << endl;

    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> kq2 = sol.twoSum(nums2, target2);
    cout << "Output: [" << kq2[0] << ", " << kq2[1] << "]" << endl;

    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> kq3 = sol.twoSum(nums3, target3);
    cout << "Output: [" << kq3[0] << ", " << kq3[1] << "]" << endl;

    return 0;
}
