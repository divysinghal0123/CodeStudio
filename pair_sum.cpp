

#include <bits/stdc++.h> 

vector<vector<int>> pairSum(vector<int> &arr, int s){
  // Write your code here.
   vector< vector<int> > completeAns;
   for(int i = 0; i<arr.size(); i++)
   {
       for(int j = i+1; j<arr.size(); j++)
       {
           if(arr[i] + arr[j] == s)
           {
               vector<int> pairAns;  // to store a pair.
             
             // Also we want each pair to be shorted.

               // which means for a pair, first smaller number then larger.
             
               pairAns.push_back(min(arr[i], arr[j]));
               pairAns.push_back(max(arr[i], arr[j]));
               completeAns.push_back(pairAns);
           }
       }
   }
   sort(completeAns.begin(), completeAns.end());
   return completeAns;

}
