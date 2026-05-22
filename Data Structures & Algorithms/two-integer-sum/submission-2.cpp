class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myMap;
        myMap.reserve(nums.size());
        for(auto i = 0; i < static_cast<int>(nums.size()); ++i)
        {
            auto it = myMap.find(target - nums[i]);

            if (it != myMap.end())
            {
                return {it->second, i};
            }
            myMap.emplace(nums[i], i);
        }
        return {};
    }
};
