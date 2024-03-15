class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size()-1;
        int s = 0 ;
        int e = len;
        int min = INT_MAX;
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] >= nums[s])
            {
                if(nums[s] < min)
                {
                    min = nums[s];
                }
                s = mid+1;
            }
            else
            {
                if(nums[mid] < min)
                {
                    min = nums[mid];
                }
                e = mid-1;
            }
        }
        return min;
    }
};