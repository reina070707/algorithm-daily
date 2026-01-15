#include <algorithm>
#include <vector>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k %= n;
        if (k == 0) return;

        std::reverse(nums.begin(), nums.end());

        std::reverse(nums.begin(), nums.begin() + k);

        std::reverse(nums.begin() + k, nums.end());
    }
};
