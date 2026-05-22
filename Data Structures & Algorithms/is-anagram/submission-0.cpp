class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
        {
            return false;
        }
        std::map<char, int> myMap1, myMap2;
        for(const auto& elem:s)
        {
            myMap1[elem] += 1;
        }
        for(const auto& elen:t)
        {
            myMap2[elen] += 1;
        }
        if(myMap1 == myMap2)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};
