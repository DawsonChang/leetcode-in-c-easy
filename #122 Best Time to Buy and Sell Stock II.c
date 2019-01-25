/*[7,1,5,3,6,4]
buy 7 [0,0,0,0,0]
buy 1 [4,2,5,3]
buy 5 [0,1,0]
buy 3 [3,1]
buy 6 [0]
add the value of index 0 of the array above
*/

int maxProfit(int* prices, int pricesSize) {
    int buyStock = prices[0];
    int profit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] - buyStock >= 0)
            profit += (prices[i] - buyStock);
        buyStock = prices[i];
    }
    return profit;
}
