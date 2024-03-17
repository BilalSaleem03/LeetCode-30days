class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int ele = nums[0];
        for(int i = 1 ; i<nums.size() ; i++)
        {
            if(nums[i] == ele)
            {
                count++;
            }
            else
            {
                ele = nums[i];
                
            }
            if(count==2)
            {
                return true;
            }
        }
        return false;
        
    }
};