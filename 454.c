class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
    {
        int result = 0;
        unordered_map<int, int> umap;
        for (auto it1 : nums1)
        {
            for (auto it2 : nums2)
            {
                umap[it1 + it2]++;
            }
        }
        for (auto it1 : nums3)
        {
            for (auto it2 : nums4)
            {
                if (umap.find(0 - (it1 + it2)) != umap.end())
                {
                    result += umap[0 - (it1 + it2)];
                }
            }
        }
        return result;
    }
};