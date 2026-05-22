class Solution {
public:
    bool isLetter(char& c) 
    {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'); //97 to 122 for uppercase and 65 to 90 for lowercase
    }
    bool isPalindrome(string s) {
        if (s.size() == 1 )
        {
            return true;
        }
        std::string str{};
        str.reserve(s.size());
        std::size_t i{};
        for(auto& chr:s)
        {
            if (isLetter(chr))
                str.push_back(std::tolower(chr));
        }
        if (str.size() == 1)
            return true;
        else if (str.size() == 0)
            return true;
        else if (str.size() < 1)
            return false;
        while(i < str.size())
        {
            std::cout << str[i] << ' ' << str[str.size() - 1 - i] << ' ' << str;
            if(!(str[i] == str[str.size() - 1 - i]))
            {
                return false;
            }
            ++i;
        }
        return true;
    }
};
