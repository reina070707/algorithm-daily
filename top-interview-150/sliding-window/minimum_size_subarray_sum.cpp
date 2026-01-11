#include <iostream>
#include <vector>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int n = nums.size();
        int min_len = INT_MAX;
        int sum = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            sum += nums[right];

            while (sum >= target) {
                min_len = std::min(min_len, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};