class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums_01(nums1.begin(), nums1.end());
        unordered_set<int> nums_02(nums2.begin(), nums2.end());
        unordered_set<int> temp_result;
        for (auto it : nums_01)
        {
            int i = 0;
            if (nums_02.count(it))
            {
                auto mn = temp_result.insert(it);
                if (mn.second) std::cout << "success insert" << *(mn.first) << endl;
            }
        }
        vector<int> result(temp_result.begin(), temp_result.end());
        return result;
    }
};