#include<bits/stdc++.h>
using namespace std;

  class Node {
  public:
       int data;
       Node *next;
       Node() {
           this->data = 0;
           this->next = NULL;
       }
       Node(int data) {
          this->data = data;
           this->next = NULL;
       }
       Node (int data, Node *next) {
           this->data = data;
           this->next = next;
      }
 };
 

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* ans=new Node(-1);
    Node* dummy=ans;
    int unit=0,carry=0;
    while(num1!=NULL && num2!=NULL)
    {
        int sum=num1->data + num2->data+carry;
        unit=sum%10,carry=sum/10;
        Node * temp=new Node(unit);
        dummy->next=temp;
        dummy=dummy->next;
        num1=num1->next;
        num2=num2->next;
    }
    if(num1==NULL)
    {
        dummy->next=num2;
    }
    else if(num2==NULL)
    {
        dummy->next=num1;
    }
    
    while(carry!=0 && dummy->next!=NULL)
    {
        dummy=dummy->next;
        int sum=dummy->data+carry;
        unit=sum%10,carry=sum/10;
        dummy->data=unit;
        
    }
    if(carry==1 )
    {
        Node *temp=new Node (1);
        dummy->next=temp;
    }
    return ans->next;
}
