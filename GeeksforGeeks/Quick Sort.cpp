class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int s, int e){
        
        if (s>=e) return;
        int p=partition(arr, s, e);
        quickSort(arr, s, p-1);
        quickSort(arr, p+1, e);
        
    }
    
    public:
    int partition (int arr[], int s, int e){
       
       int p=arr[s], cnt=0;
       for (int i=s+1; i<=e; i++){
           if (arr[i]<=p) cnt++;
       }
       swap(arr[s], arr[s+cnt]);
       int index=s+cnt, i=s, j=e;
       while (i<index && j>index){
           while (arr[i]<=p) i++;
           while (arr[j]>p) j--;
           if (i<index && j>index) swap(arr[i], arr[j]);
       }
       return index;
       
    }
};