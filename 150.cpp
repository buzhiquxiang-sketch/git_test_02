class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int result = 0;
        std::stack<char> sta;
        for (auto it : tokens)
        {
            if (it == '+')
            {
                
            }
            else if (it == '-')
            {

            }
            else if (it == '*')
            {
                
            }
            else if (it == '/')
            {
                
            }
            else
            {
                sta.push(it);
            }
        }
    }
};