#include <vector>
#include <unordered_map>
#include <ranges>
#include <span>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // key and value
        unordered_map<int, int> seen;
        namespace rv = std::ranges::views;

        for (int i : rv::iota(0, static_cast<int>(nums.size()))) {
            const int current_val = nums[i];
            const int complement = target - current_val;

            if (auto it = seen.find(complement); it != seen.end()) {
                return {it->second, i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};
