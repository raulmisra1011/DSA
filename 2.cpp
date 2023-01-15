#include<bits/stdc++.h>
using namespace std;

int coverPoints(vector <int> &A, vector<int> &B)
{
    int ans = 0;
    for(int i=0;i<A.size()-1;i++)
    {
        int n1 = A[i];
        int n2 = B[i];
        int n3 = A[i+1];
        int n4 = B[i+1];

        ans += max(abs(n3 - n1),abs(n4 - n2));
    }
    return ans;
}

int main()
{
    vector<int> A = {0,1,2}, B = {0,1,2};
    cout<<coverPoints(A,B);
}