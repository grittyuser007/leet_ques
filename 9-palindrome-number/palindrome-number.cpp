class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x>INT_MAX)
        {

            return false;
        }
        long int rev=0,rem,num=x;
        while(num!=0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;

        }
        if(rev==x)
        {
            return true;
        }
        return false;
    }
};