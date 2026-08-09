class Solution {
public:
    std::vector<vector<int>> result;
    std::vector<int> current;
    void backtrack(std::vector<int> nums, int i)
    {
        if(i == nums.size())
        {
            result.emplace_back(current);
            return;
        }

        //don't choose any number
        backtrack(nums, i+1);

        //choose a number
        current.emplace_back(nums[i]);
        backtrack(nums, i+1);

        //backtrack
        current.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {   
        int i{};
        backtrack(nums, i);
        return result;
    }
};
