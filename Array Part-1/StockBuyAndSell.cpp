#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> prices){
    int n = prices.size();
    int maxProfit = 0;
    int minPrice = prices[0];
    for(int i = 0; i<n; i++){
        minPrice = min(prices[i], minPrice);
        int currProfit = prices[i] - minPrice;
        maxProfit = max(currProfit , maxProfit);
    }
    return maxProfit;
}

int main(){
    vector<int> price = {7,3,5,4,8};
    int ans = maxProfit(price);
    cout<<"ans : "<<ans<<endl;

    return 0;
}