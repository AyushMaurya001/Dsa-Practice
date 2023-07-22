class Solution
{
    public:
    void merge(int arr[], int l, int m, int r){
        
        int len1=m-l+1, len2=r-m;
        int left[len1], right[len2];
        for (int i=0; i<len1; i++) left[i]=arr[l+i];
        for (int i=0; i<len2; i++) right[i]=arr[m+1+i];
        int i=0, j=0;
        while (i<len1 && j<len2){
            if (left[i]<right[j]) arr[l++]=left[i++];
            else arr[l++]=right[j++];
        }
        while (i<len1) arr[l++]=left[i++];
        while (j<len2) arr[l++]=right[j++];
        
    }
    public:
    void mergeSort(int arr[], int l, int r){
        
        if (l>=r) return;
        int m=l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
        
    }
};