// link: https://www.codingninjas.com/studio/problems/binary-search_972?leftPanelTab=0

int binarySearch(vector<int> arr, int s, int e, int t){
    int m=s+(e-s)/2;
    while (s<=e){
        if (arr[m]==t) return m;
        else if (arr[m]>t) e=m-1;
        else s=m+1;
        m=s+(e-s)/2;
    }
    return -1;
}

int search(vector<int> nums, int t){

    return binarySearch(nums, 0, nums.size()-1, t);

}