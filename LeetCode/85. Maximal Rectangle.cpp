class Solution {

private:
    vector<int> add(vector<int> a, vector<int> b){
        for (int i=0; i<b.size(); i++){
            if (b[i]==1) a[i]++;
            else a[i]=0;
        }
        return a;
    }

    vector<int> left(vector<int> arr){
        stack<int> stk; stk.push(-1);
        vector<int> ans(arr.size());
        for (int i=0; i<arr.size(); i++){
            while (stk.top()!=-1 && arr[stk.top()]>=arr[i]) stk.pop();
            ans[i]=stk.top(); stk.push(i);
        }
        return ans;
    }

    vector<int> right(vector<int> arr){
        stack<int> stk; stk.push(-1);
        vector<int> ans(arr.size());
        for (int i=arr.size()-1; i>=0; i--){
            while (stk.top()!=-1 && arr[stk.top()]>=arr[i]) stk.pop();
            ans[i]=stk.top(); stk.push(i);
        }
        return ans;
    }

    int area(vector<int> arr){
        vector<int> l=left(arr); vector<int> r=right(arr);
        int max=-1;
        for (int i=0; i<arr.size(); i++){
            if (r[i]==-1) r[i]=arr.size();
            int area=(arr[i])*(r[i]-l[i]-1);
            if (area>max) max=area;
        }
        return max;
    }

    vector<int> convert(vector<char> a){
        vector<int> ans;
        for (int i=0; i<a.size(); i++){
            if (a[i]=='1') ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        vector<int> row=convert(matrix[0]);
        int maxArea=area(row);
        if (matrix.size()==1) return maxArea;
        for (int i=1; i<matrix.size(); i++){
            row=add(row, convert(matrix[i]));
            int temp=area(row);
            if (temp>maxArea) maxArea=temp;
        }
        return maxArea;
        
    }
};