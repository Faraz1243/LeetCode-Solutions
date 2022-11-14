class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int helper = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[helper]=nums[i];
                helper++;
            }
        }
        for(int i=helper; i<nums.size(); i++)
        {
            nums[i]=0;
        }
    }
};