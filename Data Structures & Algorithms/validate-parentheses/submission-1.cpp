class Solution {
public:
    bool isValid(string s) {
        std::vector<char> par;
        par.reserve(s.size());
        for(const auto& chr:s)
        {
            if(chr=='(' || chr =='{' || chr == '[')
            {
                par.push_back(chr);
            }
            else if(chr==')')
            {   
                if (par.empty())
                    return false;
                else if (!(par.back() == '('))
                    return false;
                else
                    par.pop_back();
            }
            else if(chr==']')
            {   
                if (par.empty())
                    return false;
                else if (!(par.back() == '['))
                    return false;
                else
                    par.pop_back();
            }
            else if(chr=='}')
            {   
                if (par.empty())
                    return false;
                else if (!(par.back() == '{'))
                    return false;
                else
                    par.pop_back();
            }
            
        }
        if(par.empty())
            return true;
        else return false;
    }
};
