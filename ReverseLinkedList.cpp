#include <bits/stdc++.h>
using namespace std;

    

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };



LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *pre=NULL,*curr=head,*after;
    while(curr!=NULL)
    {
        after=curr->next;
        curr->next=pre;
        pre=curr;
        curr=after;
    }
    head=pre;
    return head;
}