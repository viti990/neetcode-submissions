class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<int, std::vector<std::string>> myMap;
        for(const auto& str:strs)
        {
            int key{1};
            for(const int& chr:str)
            {
                key *= chr;
            }
            std::cout<< key << ' ';
            myMap[key].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto& entry: myMap)
        {
            result.push_back(entry.second);
        }
        return result;
    }
};
