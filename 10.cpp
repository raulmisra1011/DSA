#include<bits/stdc++.h>
using namespace std;

bool perfectPeak(vector<int> &A)
{
    int maxi = A[0];
    int mini = A[0];
    for(int i=1;i<A.size()-1;i++)
    {
        if(A[i] > maxi)
        {   
            bool ans = false;
            for(int j=i+1;j<A.size();j++)
            {
                if(A[j]>A[i])
                    {ans = true;}
                else
                    {ans = false;
                    break;} 
            }
            if(ans == true)
                return true;
        }
        maxi = max(maxi,A[i]);
    }
    return false;
}

int main()
{
    vector<int> A = {10549, 15882, 24856, 301, 16642, 14414, 19856};
    cout<<perfectPeak(A);
}