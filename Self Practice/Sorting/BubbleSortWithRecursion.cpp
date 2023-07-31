#include <iostream>
using namespace std;

void bsort(int *arr, int n){

    if (n==0 || n==1) return;
    int max=arr[0];
    for (int i=0; i<n-1; i++){
        if (arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    bsort(arr,n-1);

}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    bsort(arr,n);
    for (int i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}