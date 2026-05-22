class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return false;
        }
        vector<int> counts{};
        int size{};
        counts.reserve(nums.size());
        counts.emplace_back(nums[0]);
        for(auto i = 0uz; i < nums.size(); ++i )
        {
            size = counts.size();
            for(auto j = 0uz; j < size; ++j)
            {
                if (i!=0)
                {
                    if (nums[i]==counts[j])
                    {    
                        return true;
                    }
                }
            }
            counts.emplace_back(nums[i]);
        }
        return false;
    }
};