#include <vector>
#include <algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // Handle edge case for empty input 
        // to ensure safety in production environments.
        if (nums.empty()) {
            return 0;
        }

        // std::unique moves duplicates to the end of the range in O(n) time.
        // It's preferred over manual loops for better readability and STL optimization.
        auto it = std::unique(nums.begin(), nums.end());

        // Calculate the distance to the new logical end of the vector.
        return static_cast<int>(std::distance(nums.begin(), it));
    }
};
