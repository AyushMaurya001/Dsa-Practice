// link: https://www.codingninjas.com/studio/problems/remove-duplicates_920325?leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> removeDuplicates(vector<int> arr) {

  for (int i=0; i<arr.size()-1; i++){
    for (int j=i+1; j<arr.size(); j++){
      if (arr[i]==arr[j]){
        arr.erase(arr.begin()+j); j--;
      }
    }
  }
  return arr;

}
