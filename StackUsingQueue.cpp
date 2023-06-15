#include <bits/stdc++.h> 
using namespace std;
class Stack {
	private:
        queue<int> q1;
        queue<int> q2;

   public:
    Stack() {
        
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return q1.size();
    }

    bool isEmpty() {
        return q1.empty();
    }

    void push(int element) {
        q1.push(element);
    }

    int pop() {
        if(q1.size()==0) return -1;
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q1.pop();
        while(q2.empty()==false)
        {
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }

    int top() {
        if(q1.size()==0) return -1;
         while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q1.pop();
        while(q2.empty()==false)
        {
            q1.push(q2.front());
            q2.pop();
        }
        q1.push(ans);
        return ans;
    }
};