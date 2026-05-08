// 头是值的话，就放到最后面
class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        int head = 0;
        int tail = nums.size() - 1;
        while (head <= tail)
        {
            if (nums[head] == val)
            {
                swap(nums[tail], nums[head]);
                tail--;
            }
            else
            {
                head++;
            }
        }
        cout << "test" << endl;
        return head;
    }
};
// 如果快的值不是val，慢的值就等于快的值
class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        int fast = 0;
        int slow = 0;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[fast] == val)
            {
                fast ++;
            }
            else
            {
                swap(nums[slow], nums[fast]);
                fast ++;
                slow ++;
            }
        }
        return slow;
    }
    
};