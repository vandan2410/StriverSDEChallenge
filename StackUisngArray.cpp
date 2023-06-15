#include <bits/stdc++.h> 
using namespace std;
class Stack {
private:
    int* arr;
    int tail;
    int max_size;

public:
    
    Stack(int capacity) {
        
        arr = new int[capacity];
        tail=0;
        max_size=capacity;
    }

    void push(int num) {
        if(tail!=max_size)
        {
            arr[tail]=num;
            tail++;
        }
    }

    int pop() {
        if(tail!=0)
        {
            tail--;
            return arr[tail];
        }
        return -1;
    }
    
    int top() {
        if(tail==0)
        {
            return -1;
        }
        return arr[tail-1];
    }
    
    int isEmpty() {
        if(tail==0) return 1;
        return 0;
    }
    
    int isFull() {
        if(tail==max_size) return 1;
        return 0;
    }
    
};