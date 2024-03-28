class Solution {
public:
    int climbStairs(int n) {
        vector<int> res(n+2 , 0);
        res[0] = 0;
        res[1] = 1;
        res[2] = 2;
        if(n<=2)
        {
            return res[n];
        }
        for(int i = 3 ; i<=n ; i++)
        {
            res[i] = res[i-1] + res[i-2];
        }
        return res[n];
    }
};