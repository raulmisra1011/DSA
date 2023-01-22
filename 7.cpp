#include<bits/stdc++.h>
using namespace std;

int maxArr(vector<int> &A)
{
    int max_1 = INT_MIN;
    int max_2 = INT_MIN;
    int min_1 = INT_MAX;
    int min_2 = INT_MAX;

    for(int i=0;i<A.size();i++)
    {
        max_1 = max(max_1,A[i]+i);
        min_1 = min(min_1,A[i]+i);
        max_2= max(max_2,A[i]-i);
        min_2 = min(min_2,A[i]-i);
    }
    int ans = max(max_1 - min_1,max_2 - min_2);
    return ans;
}

int main()
{
    vector<int> A = {2,2,2};
    cout<<maxArr(A);
    
} 