class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();
        int i = 0;

        while (i < n) {
            long long targetIdx = (long long)nums[i] - 1;

            if (nums[i] > 0 && nums[i] <= n && nums[i] != nums[targetIdx]) {
                std::swap(nums[i], nums[targetIdx]);
            } else {
                i++;
            }
        }

        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};
    