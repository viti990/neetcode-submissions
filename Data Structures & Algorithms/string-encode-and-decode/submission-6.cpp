class Solution {
public:
    char g_c = 10001100;
    string encode(vector<string>& strs) 
    {
        std::string str{};
        for(auto i{0uz}; i < strs.size(); ++i)
        {
            str = str + std::to_string(strs[i].size()) + g_c + strs[i];
        }
        //std::cout << str << '\n';
        return str;
    }

    vector<string> decode(string s) 
    {
        vector<string> strs;
        std::string str{};
        int j {0};
        bool flag {1};
        for(auto i{0uz}; i < s.size(); ++i)
        {
            //std::cout << s[i] << " J: " << j << " i: " << i << " flag: " << (s[i] == g_c) << '\n';
            if(s[i] == g_c)
            {
                flag = false;
                if(j == 0)
                {
                    str = "";
                    strs.push_back(str);
                    flag = true;
                }
                continue;
            }
            if (flag)
            {
                j = j*10 + static_cast<int>(s[i]) - static_cast<int>('0');
                
            }
            else
            {
                str = str + s[i];
                --j;
                if (j == 0)
                {
                    strs.push_back(str);
                    str = "";
                    flag = true;
                }
            }
            
        }
        return strs;
    }
};
