int maxProfit(int* prices, int pricesSize) {
    short int profit =0;
    short int bp=prices[0];
    for(int i=1;i<pricesSize;i++)
    { 
        
       
            if(bp>prices[i])
            {
             bp=prices[i];
             
            }
             if(profit<(prices[i]-bp))
             {
                profit=prices[i]-bp;
             }
            
            
           
        
        
    }
    return profit;
}