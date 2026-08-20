class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit=0 ;
        int diff =0 ;
        for(int i=0 ; i< prices.size() ; i++){
           for(int j=i+1 ; j<prices.size() ; j++){
             if((diff =prices[j]-prices[i])>maxProfit){
                maxProfit=diff;
                
             }
         
           }
        }
        return maxProfit;
    }
};
