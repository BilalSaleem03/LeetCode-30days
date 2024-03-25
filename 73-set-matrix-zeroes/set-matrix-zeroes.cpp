class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int coulumns = matrix[0].size();
        vector<int> x , y;
        for(int i = 0 ; i < rows ;i++)
        {
            for(int j = 0 ; j<coulumns ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        for(int i = 0 ; i<x.size(); i++)
        {
            int index = x[i];
            for(int j = 0 ; j<coulumns ; j++)
            {
                matrix[index][j] = 0;
            }
        }
        
        for(int i = 0 ; i<y.size() ; i++)
        {
            int index = y[i];
            for(int j = 0 ; j<rows ; j++)
            {
                matrix[j][index] = 0;
            }
        }
    }
};