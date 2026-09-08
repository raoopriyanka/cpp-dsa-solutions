class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minele=prices[0];
        int maxp=0;
        int comp=0;
        for(int i=0;i<prices.size();i++)
        {
            maxp=prices[i]-minele;
            comp=max(maxp,comp);
            minele=min(minele, prices[i]);
           
        }
         return comp;
    }
};