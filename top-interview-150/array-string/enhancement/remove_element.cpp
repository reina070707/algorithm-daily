#include <vector>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        auto it = std::remove(nums.begin(), nums.end(), val);
        return std::distance(nums.begin(), it);
    }
};
