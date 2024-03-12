class Solution {
public:
    bool isPalindrome(int x) {
        string a = to_string(x);
        for(int i = 0,j=a.length()-1 ; i<a.length() ; i++ , j--)
        {
            if(a[i] != a[j])
            {
                return false;
            }
        }
        return true;
        
    }
};