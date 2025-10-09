class Solution {
public:
    int reverseBits(int n) {
        uint32_t hell=0;
        int count=32;
        while(count!=0){
            hell=hell<<1;
            hell=hell | (n&1);
            n=n>>1;
            count--;
        }
        return hell;
    }
};