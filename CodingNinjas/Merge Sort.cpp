void merge(vector<int> &arr, int s, int e){

    int m=s+(e-s)/2, len1=m-s+1, len2=e-m;
    int *left= new int[len1];
    int *right= new int[len2];
    for (int i=0; i<len1; i++) left[i]=arr[s+i];
    for (int i=0; i<len2; i++) right[i]=arr[m+1+i];
    int i=0, j=0;
    while (i<len1 && j<len2){
        if (left[i]<right[j]) arr[s++]=left[i++];
        else arr[s++]=right[j++];
    }
    while (i<len1) arr[s++]=left[i++];
    while (j<len2) arr[s++]=right[j++];
    delete []left;
    delete []right;

}

void msort(vector<int> &arr, int s, int e){

    if (s>=e) return;
    int m=s+(e-s)/2;
    msort(arr, s, m);
    msort(arr, m+1, e);
    merge(arr, s, e);

}

void mergeSort(vector < int > & arr, int n) {
    
    int s=0, e=n-1;
    msort(arr, s, e);

}