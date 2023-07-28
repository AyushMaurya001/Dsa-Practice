// link: https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1

class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    void tower(int n, int a, int c, int b, long long & cnt){
        
        if (n==1){
            cnt++;
            cout << "move disk " << n << " from rod " << a << " to rod " << c << endl;
            return;
        }
        tower(n-1, a, b, c, cnt);
        cnt++;
        cout << "move disk " << n << " from rod " << a << " to rod " << c << endl;
        tower(n-1, b, c, a, cnt);
        
    }
    
    long long toh(int N, int from, int to, int aux) {
        
        if (N==0) return 0;
        long long cnt=0;
        tower(N, from, to, aux, cnt);
        return cnt;
        
    }

};