// link: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s){
        
        if (s==0) return {-1};
        if (n==1 && arr[0]==s) return {1,1};
        if (n==1) return {-1};
        int i=0, j=1;
        long long sum=arr[0], max=sum;
        while (j<n){
            if (sum==s){
                return {i+1,i+1};
            } else if (sum+arr[j]==s){
                return {i+1,j+1};
            } else if (sum+arr[j]<s){
                sum+=arr[j]; j++;
            } else if (sum+arr[j]>s){
                sum-=arr[i]; i++;
            }
        }
        return {-1};
        
    }
};