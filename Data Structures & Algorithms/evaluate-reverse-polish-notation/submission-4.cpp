class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        int aux{}, xau{};
        std::vector<string> reverseTokens;
        static constexpr int capacity{500};
        reverseTokens.reserve(capacity);
        std::size_t tokensize{tokens.size()};
        for(auto i{0uz}; i < tokensize; ++i)
        {
            if(*tokens.begin() == "+")
            {
                aux = std::stoi(reverseTokens.back());
                reverseTokens.pop_back();
                xau = std::stoi(reverseTokens.back());
                aux = xau + aux;
                reverseTokens.pop_back();
                reverseTokens.emplace_back(std::to_string(aux));
                tokens.erase(tokens.begin());
            }
            else if(*tokens.begin() == "-")
            {
                aux = std::stoi(reverseTokens.back());
                reverseTokens.pop_back();
                xau = std::stoi(reverseTokens.back());
                aux = xau - aux;
                reverseTokens.pop_back();
                reverseTokens.emplace_back(std::to_string(aux));
                tokens.erase(tokens.begin());
            }
            else if(*tokens.begin() == "*")
            {
                aux = std::stoi(reverseTokens.back());
                reverseTokens.pop_back();
                xau = std::stoi(reverseTokens.back());
                aux = xau * aux;
                reverseTokens.pop_back();
                reverseTokens.emplace_back(std::to_string(aux));
                tokens.erase(tokens.begin());
            }
            else if(*tokens.begin() == "/")
            {
                aux = std::stoi(reverseTokens.back());
                reverseTokens.pop_back();
                xau = std::stoi(reverseTokens.back());
                aux = xau / aux;
                reverseTokens.pop_back();
                reverseTokens.emplace_back(std::to_string(aux));
                tokens.erase(tokens.begin());
            }
            else
            {
                aux = std::stoi(*tokens.begin());
                reverseTokens.emplace_back(*tokens.begin());
                tokens.erase(tokens.begin());
            }
            //std::cerr <<" aux: " << aux << " reverseTokens.back(): " << reverseTokens.back() << " *tokens.begin(): " << *tokens.begin() << " i: " << i << " tokens.size():" << tokens.size() << '\n';
        }

        return aux;
    }
};
