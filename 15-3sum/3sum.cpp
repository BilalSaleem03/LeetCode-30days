class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin() , nums.end());
        //int arr[100][100];
        vector<vector<int>> arr;
        int length = nums.size();
        for(int i = 0 ; i<length ; i++)
        {
            int a = nums[i];
            int t = -a;
            int s = i+1  , e = length-1;
            
            while(s<e)
            {
                if(nums[s] + nums[e] == t)
                {
                    arr.push_back({nums[i] , nums[s] , nums[e]});
                    while(s<e && nums[s] == nums[s+1])
                    {
                        s++;
                    }
                    while(s<e && nums[e] == nums[e-1])
                    {
                        e--;
                    }
                    s++;
                    e--;
                }
                else if(nums[s] + nums[e] > t)
                {
                    e--;
                }
                else
                {
                    s++;
                }
            }
             while(i+1 < length && nums[i+1]==nums[i])
             {
                 i++;
             }
            
        }
        return arr;
        
        
    }
};