class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int totalSubsets = 1 << n; // 2^n
        vector<vector<int>> result;
        result.reserve(totalSubsets);

        // Iterate through all masks from 0 to 2^n - 1
        for (int mask = 0; mask < totalSubsets; ++mask) {
            vector<int> subset;
            for (int i = 0; i < n; ++i) {
                // Check if the i-th bit in 'mask' is set
                if (mask & (1 << i)) {
                    subset.push_back(nums[i]);
                }
            }
            result.push_back(move(subset));
        }

        return result;
    }
};