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



int findIntersection(Node *firstHead, Node *secondHead)
{
    int cnt1=0,cnt2=0;
    Node *temp1=firstHead , *temp2=secondHead;
    while(temp1!=NULL)
    {
        cnt1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        cnt2++;
        temp2=temp2->next;
    }
    int d;
    if(cnt1<cnt2)
    {
        d=cnt2-cnt1;
        temp1=secondHead;
        temp2=firstHead;
    }
    else
    {
        d=cnt1-cnt2;
        temp1=firstHead;
        temp2=secondHead;
    }
    while(d--)
    {
        temp1=temp1->next;
    }
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;
}