class Solution {

private:
    void bsort(int *arr, int n){

        if (n==0 || n==1) return;
        for (int i=0; i<n-1; i++){
            if (arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        bsort(arr,n-1);

    }


public:
    int minimumSum(int num) {
        
        int arr[4], i=0;
        while (num!=0){
            int digit=num%10;
            num=num/10;
            arr[i++]=digit;
        }
        bsort(arr,4);
        int a=0, b=0;
        for (int i=0; i<4; i++){
            if (i%2==0){
                a=(10*a)+arr[i];
            } else {
                b=(10*b)+arr[i];
            }
        }
        return a+b;

    }
};