#include<bits/stdc++.h>
using namespace std;
vector<int> SolutionplusOne(vector<int> &A) 
{
    int carry = 1;
    for(int i=A.size()-1;i>=0;i--)
    {
        int num = A[i];
        num = num + carry;
        
        if(num > 9)
        {
         A[i] = 0;
         carry = 1;   
        }
        else
        {
            A[i] = num;
            carry = 0;
        }
        
    }
    //return A;
    vector<int> B(A.size() + 1);

    int cnt = 0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
            cnt++;
        else
            break;
    }
   // cout<<cnt<<endl;
    if(cnt > 0 && cnt < A.size() && A.size()!=1)
    {
        vector<int> C(A.size() - cnt);
        for(int i=cnt;i<A.size();i++)
        {
            C[i-cnt] = A[i];
        }
        return C;
    }



    if(carry == 1)
    {
        for(int i=0;i<A.size();i++)
        {
            B[i+1] = A[i];
        }
        B[0] = 1;
        return B;
    }
    else
    {
        return A;
    }
}

int main()
{
    vector<int> v = {0, 3, 7, 6, 4, 0, 5, 5, 5};
    vector<int> v1 = SolutionplusOne(v);

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}