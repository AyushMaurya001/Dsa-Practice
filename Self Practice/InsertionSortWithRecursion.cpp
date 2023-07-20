#include <iostream>
using namespace std;

void isort(int *arr, int n, int p=0){

    if (n==p || n==p+1) return;
    for (int i=n-1; i>p; i--){
        if (arr[i]<arr[i-1]){
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
    isort(arr,n,p+1);

}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    isort(arr,n);
    for (int i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}