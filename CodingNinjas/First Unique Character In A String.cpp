// link: https://www.codingninjas.com/studio/problems/first-unique-character-in-a-string_893404

#include <bits/stdc++.h> 
vector<char> firstNonRepeating(string stream) 
{
    queue<char> q;
    vector<char> ans;
    unordered_map<char, int> count;
    for (int i=0; i<stream.size(); i++){
        count[stream[i]]++;
        q.push(stream[i]);
        while (!q.empty()){
            if (count[q.front()]>1) q.pop();
            else {
                ans.push_back(q.front()); break;
            }
        }
    }
    return ans;
}