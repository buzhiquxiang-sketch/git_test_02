class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26, 0);
        for (int i=0; i<s.size(); i++)
        {
            a[s[i] - 'a'] ++;
        }
        for (int i=0; i<t.size(); i++)
        {
            a[t[i] - 'a'] --;
        }
        for (int i=0; i<a.size(); i++)
        {
            if (a[i] != 0) return false;
        }
        return true;
    }
};