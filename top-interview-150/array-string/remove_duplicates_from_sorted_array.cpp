#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int writeIndex = 1;

        for (int readIndex = 1; readIndex < nums.size(); ++readIndex) {
            if (nums[readIndex] != nums[writeIndex - 1]) {
                nums[writeIndex] = nums[readIndex];
                writeIndex++;
            }
        }
        return writeIndex;
    }
};
