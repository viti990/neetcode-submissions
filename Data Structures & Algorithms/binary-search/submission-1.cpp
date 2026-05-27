class Solution {
public:
    int search(vector<int>& nums, int target) 
    {   
        int index {static_cast<int>(nums.size())/2};
        if (nums[index] == target)
        {
            return index;
        }
        else if(nums[index] > target)
        {
            while(index >= 0)
            {
                std::cout << index;
                if(nums[index] == target)
                {
                    return index;
                }
                --index;
            }
        }
        else
        {
            while(index < nums.size())
            {
                if(nums[index] == target)
                {
                    return index;
                }
                ++index;
            }
        }
        return -1;
    }
};
