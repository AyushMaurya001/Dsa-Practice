// link: https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?leftPanelTab=0

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   
   int z=0, o=0, t=0;
   for (int i=0; i<n; i++){
      if (arr[i]==0) z++;
      else if (arr[i]==1) o++;
      else if (arr[i]==2) t++;
   }
   int i=0;
   while (z!=0){
      arr[i++]=0;
      z--;
   }
   while (o!=0){
      arr[i++]=1;
      o--;
   }
   while (t!=0){
      arr[i++]=2;
      t--;
   }

}