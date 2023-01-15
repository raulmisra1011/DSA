#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v, int b)
{
    int n = v.size();
    int currSum = 0;

    for(int i=0;i<b;i++)
    {
        currSum += v[i];
    }

    int maxSum = currSum;

    int inc = n-1, exc = b - 1;
    while(inc >=0 and exc >=0)
    {
        currSum += v[inc--];
        currSum -= v[exc--];
        maxSum = max(maxSum,currSum);
    } 
    return maxSum;
}
int main()
{
    vector<int> v = {5,-2,3,1,2};
    int b = 3;
    cout<<solve(v,b);
}