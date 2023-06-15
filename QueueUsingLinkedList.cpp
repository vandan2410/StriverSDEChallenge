#include <bits/stdc++.h> 
using namespace std;
class Node
    {
        public:
        int data;
        Node * next;
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
    };
class Queue {
private:

   
    Node* qfront,*rear;
public:
    Queue() {
        qfront=NULL;
        rear=NULL;
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront==NULL) return true;
        return false;
    }

    void enqueue(int data) {
       Node* temp=new Node(data);
       if(rear==NULL)
       {
           qfront=rear=temp;
           return;
       }
       rear->next=temp;
       rear=rear->next;
       return;
    }

    int dequeue() {
        if(qfront==NULL) return -1;
        int ans=qfront->data;
        Node * temp=qfront->next;
        qfront->next=NULL;
        qfront=temp;
        if (qfront == NULL)
            rear = NULL;
        return ans;
    }

    int front() {
        if(qfront==NULL) return -1;
        return qfront->data;
    }
};