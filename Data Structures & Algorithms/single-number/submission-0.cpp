class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XORresult{};
        for(auto i{0uz}; i<nums.size();++i)
        {
            XORresult ^= nums[i];
            std::cout << XORresult << ' ';
        }
        return XORresult;
    }
};
