#include <bits/stdc++.h>
using namespace std;

    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };


Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* ans=new Node<int>(-1);
    Node<int>* dummy=ans;
    while(first!=NULL && second!=NULL)
    {
        if(first->data<second->data)
        {
            dummy->next=first;
            first=first->next;
        }
        else 
        {
            dummy->next=second;
            second=second->next;
        }
        dummy=dummy->next;
    }
    if(first==NULL){

        dummy->next=second;

    }

    else if(second==NULL){

        dummy->next=first;

    }
    return ans->next;
}
