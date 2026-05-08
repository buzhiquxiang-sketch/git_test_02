class Solution
{
  public:
    string reverseWords(string s)
    {
        // 删除多余空格
        for (int i = 0; i < s.size() && (i + 1) < s.size();)
        {
            if (s[i] == ' ' && s[i + 1] == ' ')
            {
                // s.erase(i, 1);
                s.erase(s.begin() + i);
            }
            else
                i++;       
        }
        // 删除头
        for (int i = 0; i < s.size();)
        {
            if (s[0] == ' ')
            {
                s.erase(s.begin());
            }
            else
            {
                break;
            }
        }
        // 反转字符串
        reverse(s.begin(), s.end());
        // 删除头
        for (int i = 0; i < s.size();)
        {
            if (s[0] == ' ')
            {
                s.erase(s.begin());
            }
            else
            {
                break;
            }
        }
        // 反转每个单词
        int num = 0; // 空格和空格之间有几个单词
        for (int i=0; i<s.size()+1; i++)
        {         
            if (s[i] == ' ' || s[i] == '\0') // a ko kopafj
            {
                reverse(s.begin() + (i - num), s.begin() + i);
                num = 0;
                continue;
            }
            num ++;         
        }
        return s;
    }
};