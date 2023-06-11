#include <bits/stdc++.h> 
using namespace std;
bool cmd(pair<pair<int,int>,int> p1 , pair<pair<int,int>,int> p2)
{
    if(p1.first.second<p2.first.second) return true;
    else if(p1.first.second>p2.first.second) return false;
    else if(p1.second<p2.second) return true;
    return false;
    
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {

    vector<pair<pair<int,int>,int>> temp;
    for(int i=0;i<end.size();i++)
    {
        pair<pair<int,int>,int> temp1;
        temp1.first.first=start[i];
        temp1.first.second=end[i];
        temp1.second=i+1;
        temp.push_back(temp1);
    }
    sort(temp.begin(),temp.end(),cmd);
    vector<int> ans;
    int lastend=temp[0].first.second;
    ans.push_back(temp[0].second);
    for(int i=1;i<temp.size();i++)
    {
        int nextstart=temp[i].first.first;
        int nextend=temp[i].first.second;
        if(lastend<nextstart)
        {
            ans.push_back(temp[i].second);
            lastend=nextend;
        }
    }
    return ans;
}