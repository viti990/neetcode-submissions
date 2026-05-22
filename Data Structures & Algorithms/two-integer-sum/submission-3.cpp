class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        const int n = static_cast<int>(nums.size());

        for (int i = 0; i < n; ++i)
        {
            const int complement = target - nums[i];

            for (int j = i + 1; j < n; ++j)
            {
                if (nums[j] == complement)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
