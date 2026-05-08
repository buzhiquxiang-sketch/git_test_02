class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        for (int i=0; i<size; i=i+2*k)
        {
            if ((size - i) < k)
            {
                reverse(s.begin() + i, s.end());
            }
            else if((size - i) >= (2 * k))
            {
                reverse(s.begin()+i, s.begin()+i+k);
            }
            else
            {
                reverse(s.begin()+i, s.begin()+i+k); 
            }
        }
        return s;
    }
};