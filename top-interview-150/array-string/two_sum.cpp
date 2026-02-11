#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out = {};
        int num1 = 0, num2 = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            num1 = nums[i];
            for (int j = i + 1; j < nums.size(); ++j) {
                num2 = nums[j];
                if (num1 + num2 == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};