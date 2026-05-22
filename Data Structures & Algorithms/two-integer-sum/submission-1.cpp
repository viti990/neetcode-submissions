class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i< static_cast<int>(nums.size());++i)
        {
            for(int j = i+1; j < static_cast<int>(nums.size());++j)
            {
                if(target-nums.at(i) == nums.at(j))
                {
                    vector vec{i, j};
                    return vec;
                }
            }
        }
    }
};
