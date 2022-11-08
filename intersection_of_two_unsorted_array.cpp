#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i=0;             //FOR ITERATION
    int j=0;             //FOR ITERATION
    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])         //IF I IS SMALLLER
        {
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            j++;
        }else{
            ans.push_back(arr1[i]);     //IF BOTH ELEMENTS ARE EQUAL
            i++;
            j++;
        }
    }
    return ans;
	// Write your code here.
}
