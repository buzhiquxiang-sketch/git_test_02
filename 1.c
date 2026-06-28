class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::vector<pair<int, int>> vect;
        for (int i=0; i<nums.size(); i++)
        {
            vect.push_back({nums[i], i});
        }
        std::sort(vect.begin(), vect.end());
    //     std::sort(vect.rbegin(), vect.rend());
    //     std::sort(vect.begin(), vect.end(), [](const pair<int, int> &a, const pair<int, int> &b)
    //     {
    //         return a.second < b.second;
    //     }
    // );
        int head = 0;
        int tail = nums.size() - 1;
        while (head < tail)
        {
            if (vect[head].first + vect[tail].first < target)
            {
                head ++;
            }
            else if (vect[head].first + vect[tail].first > target)
            {
                tail --;
            }
            else
                return {vect[head].first, vect[tail].first};
        }
        return {};
    }
};