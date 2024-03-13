class Solution {
    public int maxProduct(int[] nums) {
        int product , max_product = -99999;
        for(int i = 0 ; i<nums.length;i++)
        {
            product = 1;
            for(int j = i ; j<nums.length ; j++)
            {
                product*=nums[j];
                if(product > max_product)
                {
                    max_product = product;
                }
            }
        }
        return max_product;
    }
}