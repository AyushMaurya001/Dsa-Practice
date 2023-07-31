#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){

    int mid=s+(e-s)/2;
    int len1=mid-s+1, len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    for (int i=0, j=s; i<len1; i++){
        first[i]=arr[j++];
    }
    for (int i=0, j=mid+1; i<len2; i++){
        second[i]=arr[j++];
    }

    int i=0, j=0, k=s;
    while (i<len1 && j<len2){
        if (first[i]<second[j]){
            arr[k++]=first[i++];
        } else {
            arr[k++]=second[j++];
        }
    }
    while (i<len1){
        arr[k++]=first[i++];
    }
    while (j<len2){
        arr[k++]=second[j++];
    }

    delete []first;
    delete []second;

}

void msort(int *arr, int s, int e){

    if (s>=e) return;
    int mid=s+(e-s)/2;
    msort(arr,s,mid);
    msort(arr,mid+1,e);
    merge(arr,s,e);

}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    msort(arr,0,n-1);
    for (int i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}