int maxProfit(int* prices, int pricesSize) {
    int maxP=0,l=0,r=0,profit=0;
    while(r<pricesSize)
    {
        if(prices[l]<prices[r])
        {
            profit=prices[r]-prices[l];
            maxP=fmax(profit,maxP);
        }
        else
        {
            l=r;
        }
        r++;
    }
    return maxP;
}