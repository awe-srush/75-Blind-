#include<iostream>
#include<vector>
using namespace std;

int Max_Profit(vector<int> prices){
    int max_profit = 0;
        int min_buy = prices[0];
        for(int i = 1 ; i < prices.size() ; i++){ // a very brainy way to figure out biggest difference between two elements in a single pass.
             if(prices[i] < min_buy){ // check for minimum buy price
                 min_buy = prices[i];
             }
             else if ( prices[i] - min_buy > max_profit){ // check for max profit
                 max_profit = prices[i] - min_buy;
             }
            
        }
    return max_profit;
}

int main(){
    vector<int> prices = { 7, 1, 5, 6, 4 };
    int max_profit = Max_Profit(prices);
    cout << "Max Profit =" << max_profit << endl;
}