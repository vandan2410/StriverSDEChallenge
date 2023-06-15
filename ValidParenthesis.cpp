#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string e)
{
    stack<int> s;
    
    for(int i=0;i<e.size();i++)
    {
        if(e[i]=='[' || e[i]=='{' || e[i]=='(')
        {
            s.push(e[i]);
        }
        else
        {
            if(s.empty()!=false) return false;
            else if(e[i]==']')
        {
            char temp=s.top();
            s.pop();
            if(temp=='[')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        else if(e[i]=='}')
        {
            char temp=s.top();
            s.pop();
            if(temp=='{')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        else if(e[i]==')')
        {
            char temp=s.top();
            s.pop();
            if(temp=='(')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        }
    }
    if(s.empty()==false) return false;
    return true;

}