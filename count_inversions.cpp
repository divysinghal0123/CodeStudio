#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    int count = 0;
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] > arr[j])
                count++;
        }
    }
    return count;
}
