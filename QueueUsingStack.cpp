#include<bits/stdc++.h>
using namespace std;
class Queue {
    private: 

        stack<int> s1;
        stack<int> s2;
    
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        s1.push(val);
    }

    int deQueue() {
        if(s1.size()==0) return -1;
        while(s1.size()>1)
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ans=s1.top();
        s1.pop();
        while(s2.empty()==false)
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }

    int peek() {
        if(s1.size()==0) return -1;
        while(s1.size()>1)
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ans=s1.top();
        
        while(s2.empty()==false)
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }

    bool isEmpty() {
        if(s1.size()==0) return true;
        return false;
    }
};