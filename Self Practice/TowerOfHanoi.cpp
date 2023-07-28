#include <iostream>
#include <vector>
using namespace std;

void tower(int n, int a, int c, int b, vector<vector<int>>& ans){

    if (n==1){
        vector<int> temp;
        temp.push_back(a); temp.push_back(c);
        ans.push_back(temp);
        return;
    }
    tower(n-1, a, b, c, ans);
    vector<int> temp;
    temp.push_back(a); temp.push_back(c);
    ans.push_back(temp);
    tower(n-1, b, c, a, ans);

}

int main(){

    int n=4;
    // cin >> n;
    vector<vector<int>> ans;
    tower(n, 1, 3, 2, ans);
    for (int i=0; i<ans.size(); i++){
        for (int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}