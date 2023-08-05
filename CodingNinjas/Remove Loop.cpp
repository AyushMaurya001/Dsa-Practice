// link: https://www.codingninjas.com/studio/problems/remove-loop_4609669?leftPanelTab=0

#include <bits/stdc++.h> 
/************************************************
   
   Following is the linkedList class structure:

   class List {
    public:
        int data;
        List *next;
        List() {};
        List(int v){
            data = v;
            next = NULL;
        };
   };

*************************************************/

List* noLoop(List* &head , int k) {
   
   int cnt=0;
   List *curr=head;
   while (curr!=NULL){
      cnt++;
      if (cnt==k){
         curr->next=NULL;
         break;
      }
      curr=curr->next;
   }
   return head;

}