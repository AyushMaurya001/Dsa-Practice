// link: https://www.codingninjas.com/studio/guided-paths/data-structures-algorithms/content/118820/offering/1381870?leftPanelTab=0

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n){

    int i=0;
    long long sum=0, maxSum=0;
    while (i<n){
        sum+=arr[i++];
        if (sum>maxSum) maxSum=sum;
        if (sum<0) sum=0;
    }
    return maxSum;
    
}