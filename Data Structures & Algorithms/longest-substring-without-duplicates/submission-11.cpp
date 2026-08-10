class Solution 
{
    public:
        int lengthOfLongestSubstring(string s) 
        {
            char* ptr1 = &s[0];
            char* ptr2 = &s[0];
            char* last_addr = &s.back();
            std::unordered_set<char> mySet;
            int max{}, count{};
        
            while(ptr2 != last_addr+1)
            {
                if(mySet.contains(*ptr2))
                {
                    while(ptr1 !=ptr2 && mySet.contains(*ptr2))
                    {
                        mySet.erase(*ptr1);
                        ptr1 += 1; 
                    }
                }
                else
                {
                    mySet.insert(*ptr2);
                    ptr2 += 1;
                }
                count = mySet.size();
                if(count > max)
                {
                    max = count;
                }
                //std::cout << count << ' ';
            }
            return max;
        }
};