#include <bits/stdc++.h> 
using namespace std;
vector<int> nextGreater(vector<int> &arr, int n) {
    stack<int> s;
    
    vector<int> ans;
    
    for(int i=arr.size()-1;i>=0;i--)
    {
            while((!s.empty()) && (s.top()<=arr[i]))
            {
                s.pop();
            }
            if(s.empty()==true) ans.push_back(-1);
            else
            {
                ans.push_back(s.top());
            }
            s.push(arr[i]);
    }
        
    
    reverse(ans.begin(),ans.end());
    return ans;

}