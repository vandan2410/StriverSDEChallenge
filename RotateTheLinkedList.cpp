
#include<bits/stdc++.h>
using namespace std;
 class Node {
 public:
     int data;
     Node *next;
     Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node *next) : data(x), next(next) {}
 };


Node *rotate(Node *head, int k) {
    int count=0;
    Node* temp1=head,*temp2=head,*temp3=head;
    
    while(temp1!=NULL)
    {
         count++;
         temp1=temp1->next;
    }
    while(temp3->next!=NULL)
    {
     temp3=temp3->next;     
    }
    k=k%count;
    k=count-k;
    temp1=head;
    for(int i=0;i<k-1;i++)
    {
         temp1=temp1->next;
    }
    temp3->next=head;
    Node* ans=temp1->next;
    temp1->next=NULL;
    return ans;
}