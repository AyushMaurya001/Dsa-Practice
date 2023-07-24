// link: https://practice.geeksforgeeks.org/problems/subset-sums2234/1

class Solution
{
    
    void merge(vector<int>& arr, int s, int e){
        
        int m=s+(e-s)/2, l1=m-s+1, l2=e-m;
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
    
    void msort(vector<int>& arr, int s, int e){
        
        if (s>=e) return;
        int m=s+(e-s)/2;
        msort(arr, s, m);
        msort(arr, m+1, e);
        merge(arr, s, e);
        
    }
    
    void subset(vector<int> arr, vector<int>& ans, int sum, int i){
        
        if (i>=arr.size()){
            ans.push_back(sum);
            return;
        }
        subset(arr, ans, sum, i+1);
        subset(arr, ans, sum+arr[i], i+1);
        
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int n){
        
        vector<int> ans;
        subset(arr, ans, 0, 0);
        msort(arr, 0, n-1);
        return ans;
        
    }
};