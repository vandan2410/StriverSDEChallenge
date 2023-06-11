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

LinkedListNode<int>* reverse(LinkedListNode<int> * head)
{
    LinkedListNode<int> * after;
    LinkedListNode<int> * curr=head;
    LinkedListNode<int> * prev=NULL;
    while(curr!=NULL)
    {
        after=curr->next;
        curr->next=prev;
        prev=curr;
        curr=after;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;
    LinkedListNode<int> *prev = nullptr;

    // Find the middle of the linked list
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        LinkedListNode<int> *next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    // Handle odd length by moving slow pointer one step further
    if (fast != nullptr) {
        slow = slow->next;
    }

    // Compare the reversed second half with the first half
    while (prev != nullptr && slow != nullptr) {
        if (prev->data != slow->data) {
            return false;
        }
        prev = prev->next;
        slow = slow->next;
    }

    return true;

   

}