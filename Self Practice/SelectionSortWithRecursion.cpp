#include <iostream>
using namespace std;

void ssort(int *arr, int n, int min=0){

    if (min==n || min+1==n) return;
    int p=min;
    for (int i=n-1; i>p; i--){
        if (arr[i]<arr[min]){
            min=i;
        }
    }
    swap(arr[min],arr[p]);
    ssort(arr,n,p+1);

}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    ssort(arr,n);
    for (int i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}