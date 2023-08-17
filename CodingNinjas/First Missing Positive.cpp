// link: https://www.codingninjas.com/studio/problems/first-missing-positive_699946?leftPanelTab=0

#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    int *s=arr;
    sort(s, s+n);
    int ans=1;
    for (int i=0; i<n; i++){
        if (arr[i]<ans){
            continue;
        } else if (arr[i]==ans){
            ans++;
        } else if (arr[i]>ans){
            return ans;
        }
    }
    if (arr[n-1]<ans) return ans;
    return ans+1;
}