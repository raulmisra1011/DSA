#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &A)
{
    int idx1 = 0;
    int idx2 = 0;
    for(int i=A.size()-2;i>=0;i--)
    {
        if(A[i] < A[i+1])
            {idx1 = i;
            break;}
    }
    if(idx1 < 0)
    {
        reverse(A.begin(),A.end());
    }
    else
    {
    for(int i = A.size()-1;i>=0;i--)
    {
        if(A[idx1] < A[i])
            {idx2 = i;
            break;}

    }
    swap(A[idx1],A[idx2]);

    sort(A.begin()+idx1+1,A.end());
    }

    return A;
}

int main()
{
    vector<int> A = {1,2,3};
    vector<int> B = nextPermutation(A);

    for(int i=0;i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }
}