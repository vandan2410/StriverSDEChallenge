#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* removeKthNode(Node* head, int K)
{
    Node* dummy=new Node();
    dummy->next=head;
    Node * start=dummy,*end=dummy;
    for(int i=0;i<K;i++)
    {
        end=end->next;
    }
    while(end->next!=NULL)
   {
       end=end->next;
        start=start->next;
   }
   
   start->next = start->next->next;
   return dummy->next;;
}
