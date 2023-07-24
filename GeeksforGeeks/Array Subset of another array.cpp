// link: https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

void merge(int *arr, int s, int e){
    
    int m=s+(e-s)/2;
    int l1=m-s+1, l2=e-m;
    int *left= new int[l1];
    int *right= new int[l2];
    for (int i=0; i<l1; i++) left[i]=arr[s+i];
    for (int i=0; i<l2; i++) right[i]=arr[m+1+i];
    int i=0, j=0;
    while (i<l1 && j<l2){
        if (left[i]<right[j]) arr[s++]=left[i++];
        else arr[s++]=right[j++];
    }
    while (i<l1) arr[s++]=left[i++];
    while (j<l2) arr[s++]=right[j++];
    delete []left;
    delete []right;
    
}

void msort(int *arr, int s, int e){
    
    if (s>=e) return;
    int m=s+(e-s)/2;
    msort(arr, s, m);
    msort(arr, m+1, e);
    merge(arr, s, e);
    
}

string isSubset(int a1[], int a2[], int n, int m) {
    
    msort(a1, 0, n-1);
    msort(a2, 0, m-1);
    int i=0, j=0;
    bool val=1;
    while (i<n && j<m){
        if (a1[i]==a2[j]){
            i++; j++;
        } else if (a1[i]<a2[j]){
            i++;
        } else {
            val=0; break;
        }
    }
    if ((val==0) || (i==n && j<m)){
        string temp="No";
        return temp;
    }
    string temp="Yes";
    return temp;
    
}