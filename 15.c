class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] > 0)   break;
            if (i > 0 && nums[i] == nums[i-1])  continue;
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                if ((nums[i] + nums[left] + nums[right]) > 0)        right --;
                else if ((nums[i] + nums[left] + nums[right]) < 0)   left ++;
                else if ((nums[i] + nums[left] + nums[right]) == 0)
                {
                    vector<int> temp{nums[i], nums[left], nums[right]};
                    result.push_back(temp);
                    while (right > left && nums[left] == nums[left+1]) left ++;
                    while (right > left && nums[right] == nums[right-1]) right --;
                    left  ++;
                    right --;
                }
            } 
        }
        return result;
    }
};