// link: https://practice.geeksforgeeks.org/problems/bubble-sort/1

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n){
        
        for (int i=0; i<n; i++){
            bool swapped=0;
            for (int j=0; j<n-i-1; j++){
                if (arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped=1;
                }
            }
            if (swapped==0) return;
        }    
    
    }
};