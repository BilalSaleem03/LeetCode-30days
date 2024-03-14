class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int r = 0;
        for(int i = 0 ; i<32 ; i++)
        {
            int a = n&1;
            int rev = a<<(31-i);
            r = r | rev;
            n=n>>1;
            
        }
        return r;
    }

};