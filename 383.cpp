class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size())    return false;
        int a[26] = {0};
        for (int i=0; i<ransomNote.size(); i++)
        {
            a[ransomNote[i] - 'a']++;
        }
        for (int i=0; i<magazine.size(); i++)
        {
            a[magazine[i] - 'a']--;
        }
        for (int i=0; i<sizeof(a) / sizeof(int); i++)
        {
            if (a[i] > 0)
            {
                return false;
            }
        }
        return true;
    }
};