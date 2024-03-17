class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> arr;
        
        for(int i =0 ; i<numRows ; i++)
        {
            vector<int> row;
            for(int j = 0 ; j<=i ; j++)
            {
                if(j == 0 || j==i)
                {
                    row.push_back(1);
                }
                else
                {
                    if(i>1)
                    {
                        row.push_back(arr[i-1][j-1] + arr[i-1][j]);
                    }
                }
            }
            arr.push_back(row);
        }
        return arr;
    }
};