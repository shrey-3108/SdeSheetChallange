#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = INT_MAX,profit = 0;
    for(auto &x : prices){
        mini = min(mini,x);
        profit = max(profit, x - mini);
    }
    return profit;
}
