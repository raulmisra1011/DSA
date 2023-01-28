#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b)
{
        return a+b>b+a;
}

string largestNumber(vector<int>& nums) 
{
        vector<string> ans = {"a","b","c","d","ab","aa"};

        //for(int i:nums)ans.push_back(to_string(i));

        sort(ans.begin(),ans.end(),comp);

        string res;

        for(auto i : ans)res+=i;

        return res[0]=='0' ? "0":res;
}

int main()
{
    vector<int> A = {9,27, 29, 28};
    cout<<largestNumber(A);
}