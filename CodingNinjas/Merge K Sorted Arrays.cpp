// link: https://www.codingninjas.com/studio/problems/merge-k-sorted-arrays_975379?leftPanelTab=0

#include <bits/stdc++.h> 

vector<int> merge(vector<int> a, vector<int> b){

    vector<int> ans;
    int i=0, j=0;
    while (i<a.size() && j<b.size()){
        if (a[i] <= b[j]) ans.push_back(a[i++]);
        else ans.push_back(b[j++]);
    }
    while (i<a.size()){
        ans.push_back(a[i++]);
    }
    while (j<b.size()){
        ans.push_back(b[j++]);
    }
    return ans;

}

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int> ans;
    for (int i=0; i<k; i++){
        ans=merge(ans, kArrays[i]);
    }
    return ans;
}
