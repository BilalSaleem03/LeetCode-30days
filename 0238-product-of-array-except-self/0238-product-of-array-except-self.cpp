class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
    int length = nums.size();
    vector<int> answer(length, 1);
    int leftP = 1;
    for (int i = 0; i < length; ++i) {
        answer[i] *= leftP;
        leftP *= nums[i];
    }
    int rightP = 1;
    for (int i = length - 1; i >= 0; --i) {
        answer[i] *= rightP;
        rightP *= nums[i];
    }

    return answer;
    
        
    }
};