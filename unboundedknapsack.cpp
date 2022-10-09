
#include <bits/stdc++.h> 
int f(int ind,int W,vector<int> &val,vector<int> &wt,vector<vector<int>> &dp){
    if(ind == 0){
        return ((int)(W/wt[0])*val[0]);
    }
    if(dp[ind][W] != -1) return dp[ind][W];
    int notTake = 0 + f(ind-1,W,val,wt,dp);
    int take = INT_MIN;
    if(wt[ind] <= W) take = val[ind] + f(ind,W-wt[ind],val,wt,dp);
    
    return dp[ind][W] = max(notTake,take);
}
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<vector<int>> dp(n,vector<int> (w+1,-1));
    return f(n-1,w,profit,weight,dp);
    // Write Your Code Here.
}
