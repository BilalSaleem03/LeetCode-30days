class Solution {
    public int missingNumber(int[] nums) {
        int size = nums.length;
        boolean arr[] = new boolean[size+1];
        for(int i = 0 ; i<size+1 ;i++)
        {
            arr[i] = false;
        }
        
        for(int j = 0 ; j<size ;j++)
        {
            arr[nums[j]] = true;
        }
        
        for(int k = 0 ; k<size+1 ; k++)
        {
            if(arr[k] == false)
            {
                return k;
            
            }
        }
        return -1;
    }
}