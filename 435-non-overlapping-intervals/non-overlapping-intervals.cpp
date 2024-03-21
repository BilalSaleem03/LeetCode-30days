class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end());
        
        int ans = 0 ; 
        int pre = 0;
        
        for(int curr = 1 ; curr<intervals.size() ; curr++)
        {
            if(intervals[curr][0] < intervals[pre][1])
            {
                ans++;
                if(intervals[curr][1] <= intervals[pre][1])
                {
                    pre = curr;
                }
            }
            else
            {
                pre = curr;
            }
        }
        return ans;
    }
};