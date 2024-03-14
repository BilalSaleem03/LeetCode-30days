class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int a = 0;
        int b = 0;
        bool check = true;
        
        while(a!=(m+b) && b != n)
        {
            if(nums2[b] < nums1[a])
            {
                for(int i = (m+n)-1 ; i>a ; i--)
                {
                    nums1[i] = nums1[i-1];
                }
                nums1[a] = nums2[b];
                a++;
                b++;
            }
            else
            {
                a++;
            }
            
        }
        if(nums1[a] == 0)
        {
            for(int j = a ; j<(n+m) ; j++)
            {
                nums1[j] = nums2[b];
                b++;
                
            }
        }
        
    }
};