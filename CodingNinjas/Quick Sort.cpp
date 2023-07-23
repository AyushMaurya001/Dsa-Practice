// link: https://www.codingninjas.com/studio/problems/quick-sort_983625

#include <bits/stdc++.h> 

int partition(vector<int>& arr, int s, int e){

    int p=arr[s], cnt=0;
    for (int i=s+1; i<=e; i++){
        if (arr[i]<=p) cnt++;
    }
    swap(arr[s], arr[s+cnt]);
    int i=s, j=e, index=s+cnt;
    while (i<index && j>index){
        while (arr[i]<=p) i++;
        while (arr[j]>p) j--;
        if (i<index && j>index) swap(arr[i], arr[j]);
    }
    return index;

}

void qsort(vector<int>& arr, int s, int e){

    if (s>=e) return;
    int p=partition(arr, s, e);
    qsort(arr, s, p-1);
    qsort(arr, p+1, e);

}

vector<int> quickSort(vector<int> arr)
{
    qsort(arr, 0, arr.size()-1);
    return arr;
}
