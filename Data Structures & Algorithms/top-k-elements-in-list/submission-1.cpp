class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> myMap;
        for(const auto& elem:nums)
        {
            myMap[elem] += 1;
            //std::cout<< elem << ' ' << myMap[elem] << '\n';
        }
        std::priority_queue<std::pair<int, int>> maxHeap;
        for(const auto& [item, count]:myMap)
        {
            //std::cout<< item << ' ' << count << '\n';
            maxHeap.push({count, item});
        }
        vector<int> result;
        for(auto i = 0; i < k; ++i)
        {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        return result;
    }
};
