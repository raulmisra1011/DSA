#include<bits/stdc++.h>
using namespace std;

vector<int> findOccurences(vector<int> &a)
{
    map<int,int> mp;
    for(int i=0;i<a.size();i++)
    {   
        if(mp.find(a[i])==mp.end())
            mp[a[i]] = 1;
        else
            mp[a[i]]++;
    }
   
    vector<int> ans(mp.size(),0);
    
    int i = 0;
    for (auto it=mp.begin(); it!=mp.end(); it++)
    {
        ans[i++] = (*it).second;
    }
    return ans;
}
int main()
{
    vector<int> a = {4,3,3};
    vector<int> ans = findOccurences(a);
    for(int i = 0 ;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}