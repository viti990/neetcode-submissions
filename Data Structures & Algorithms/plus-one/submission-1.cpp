class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long int aux{}, flag{};
        std::vector<int> ret;
        ret.reserve(100);
        for(auto i{0uz}; i < digits.size(); ++i)
        {
            if(i == digits.size()-1)
            {

                aux = aux*10 + digits[i]+1;
            }
            else
            {
                aux = aux*10 + digits[i];
            }
            //std::cout << aux << ' ';
        }

        for(auto i{0uz}; i < digits.size(); ++i)
        {
            ret.emplace_back(aux%10);
            aux = aux/10;
        }
        if(aux != 0)
        {
           ret.emplace_back(aux%10); 
        }
        std::reverse(ret.begin(), ret.end());
        return ret;
    }
};
