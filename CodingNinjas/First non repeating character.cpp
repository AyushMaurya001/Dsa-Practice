// link: https://www.codingninjas.com/studio/problems/first-non-repeating-character_920324?leftPanelTab=0

#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  unordered_map<char, int> count;
  for (int i=0; i<str.size(); i++){
    count[str[i]]++;
  }
  for (int i=0; i<str.size(); i++){
    if (count[str[i]]==1) return str[i];
  }
  return str[0];

}
