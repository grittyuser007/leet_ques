class Solution {
public:
    int pivotIndex(vector<int>& arr) {
      int index=-1;
     
     vector<int> sumleft(arr.size());
     vector<int> sumright(arr.size());
      sumright[arr.size()-1]=arr[arr.size()-1];
      sumleft[0]=arr[0];
      
      for(int i=1;i<arr.size();i++)
      {
        sumleft[i]=sumleft[i-1]+arr[i];
        
    
      }
      for(int i=arr.size()-2;i>=0;i--)
      {
        sumright[i]=sumright[i+1]+arr[i];
       } 
       for(int i=0;i<arr.size();i++)
       {
        if(sumleft[i]==sumright[i])
       {return i;}
        
       }

       return -1;

    }
};