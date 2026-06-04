class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = strlen(s.data());
        int same = 0;
        
        for (int i=1; i<=(size/2); i++)
        {
            if (s[i] == s[0])
            {
                same = i;
                if ((size % same) == 0)
                {
                    bool flag = true;
                    for (int j=i; j<i+same; j++)
                    {
                        if (s[j] != s[j-i])
                            flag = false;
                        break;
                    }
                    if (flag)
                        return true;
                }   
            }
        }
        return false;
    }
};