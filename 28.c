class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int leng_haystack = haystack.size(); // 9
        int leng_needle   = needle.size();   // 3
        cout << leng_haystack << "---" << leng_needle << endl;
        for (int i=0; i<leng_haystack; i++)
        {
            int k = i;
            cout << i << endl;
            for (int j=0; j<leng_needle; )
            {
                if (haystack[k] == needle[j])
                {
                    k++;
                    j++;
                    if (j == leng_needle)
                    {
                        return i;
                    }
                    continue;
                }
                else
                    break;
                j++;       
            }
        }
        return -1;           
    }
};