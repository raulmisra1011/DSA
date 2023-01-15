#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int a)
{
   int i = 0, n = A.size(), count = 0;
    bool bulbFound = false;
    while(i<n)
    {
        int j = min(n - 1 ,i + a - 1);
        bulbFound = false;
        while(j >= i - a + 1  && j >= 0 && j < n)
        {
            if(A[j]==1) 
            {
                bulbFound = true;
                count++;
                i = j + a;
                break;
            }
            j--;
        }
        if(!bulbFound) return -1;
    }
    return count;

}

int main()
{
    vector<int> A = {0,0,1,1,1,0,0,1};
    int B = 3;

    cout<<solve(A,B);

}