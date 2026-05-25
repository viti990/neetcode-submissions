class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int i{}, j{1};
        while(i<numbers.size())
        {
            j = 1;
            while(j<numbers.size())
            {
                //std::cerr << i << ' ' << j << '\n';
                if(target - numbers[i] == numbers[j])
                {
                    return {i+1, j+1};
                }
                ++j;
            }
            ++i;
        }
        return {};
    }
};
