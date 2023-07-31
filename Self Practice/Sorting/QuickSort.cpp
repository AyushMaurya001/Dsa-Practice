#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){

    int p=arr[s], cnt=0;
    for (int i=s+1; i<=e; i++){
        if (arr[i]<=p) cnt++;
    }
    swap(arr[s], arr[s+cnt]);
    int index=s+cnt;
    int i=s, j=e;
    while (i<index && j>index){
        while (arr[i]<=p) i++;
        while (arr[j]>p) j--;
        if (i<index && j>index) swap(arr[i], arr[j]);
    }
    return index;

}

void qsort(int *arr, int s, int e){

    if (s>=e) return;
    int p=partition(arr, s, e);
    qsort(arr, s, p);
    qsort(arr, p+1, e);

}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    qsort(arr, 0, n-1);
    for (int i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}