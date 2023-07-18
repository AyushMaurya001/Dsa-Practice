class Solution {
  public:
    void printTriangle(int n) {
        
        for (int i=0; i<n; i++){
            char a='A';
            for (int j=0; j<=i; j++){
                cout << a++;
            }
            cout << endl;
        }
        
    }
};