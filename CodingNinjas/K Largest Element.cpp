// link: https://www.codingninjas.com/studio/problems/k-largest-element_1062624?leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
    
    sort(a.begin(), a.end());
    vector<int> ans;
    int i=n-1;
    while (i>=0 && k>0){
        ans.push_back(a[i--]); k--;
    }
    sort(ans.begin(), ans.end());
    return ans;

}