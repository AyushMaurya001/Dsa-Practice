// link: https://www.codingninjas.com/studio/guided-paths/data-structures-algorithms/content/118820/offering/1381875?leftPanelTab=0

#include <bits/stdc++.h> 
void sort012(int *arr, int n){
   
   int zero=0, one=0, two=0;
   for (int i=0; i<n; i++){
      if (arr[i]==0) zero++;
      else if (arr[i]==1) one++;
      else two++;
   }
   int i=0;
   while (zero>0){
      arr[i++]=0;
      zero--;
   }
   while (one>0){
      arr[i++]=1;
      one--;
   }
   while (two>0){
      arr[i++]=2;
      two--;
   }

}