class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return false;
        }
        std::unordered_set mySet (nums.begin(), nums.end());
        if(mySet.size()!=nums.size())
        {
            return true;
        }
        else 
            return false;
    }
};