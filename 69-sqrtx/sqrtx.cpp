class Solution {
public:
    int mySqrt(int x) {
      int low=1;int high=x;
      int root=0;
      if(x==0 || x==1)
      {
        return x;
      }
    long long mid=low+(high-low)/2;
      while(low<=high)
      {
        if(mid*mid == x )
        {
            return mid;
        }  
        else if(mid*mid > x)
        {
      high=mid-1;
        }
        else
        {  if(mid>root){root=mid;}
            
            low=mid+1;
        }

        mid=low+(high-low)/2;
      }
      return root;




      }

    
};