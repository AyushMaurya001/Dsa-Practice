// link: https://www.codingninjas.com/studio/problems/ninja-and-ladoos_1112629?leftPanelTab=0

int ninjaAndLadoos(vector<int> &a, vector<int> &b, int m, int n, int t) {

    vector<int> mix(m+n);
    int i=0, j=0, k=0;
    while (i<m && j<n){
        if (a[i] < b[j]){
            mix[k++]=a[i++];
        } else {
            mix[k++]=b[j++];
        }
    }
    while (i<m){
        mix[k++]=a[i++];
    }
    while (j<n){
        mix[k++]=b[j++];
    }
    return mix[t-1];

}