class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val;
        int length = nums.size();
        bool check = true;
        int count;
        for(int i =0 ; i<length ; i++)
        {
            count = 0;
            for(int j =0 ; j<length ; j++)
            {
                if(nums[i] == nums[j])
                {
                    count++; 
                    
                }
            }
            if(count == 1)
            {
                cout<<nums[i]<<endl;

                val = nums[i];
                break;
            }
        }
        
        return val;
    }
    
};