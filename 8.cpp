#include<bits/stdc++.h>
using namespace std;

int solve(int A, vector<int> &B)
{
  vector<int> temp(B.size(),0);
    int sum = 0;
  for(int i=0;i<A;i++)
  {
     sum+=B[i];
  }
  int num1 = sum/3;
    int sum1 = 0;
  for(int j=B.size()-1;j>=0;j--)
  {
    sum1+=B[j];
    if(sum1==num1)
        temp[j] = 1;
        
  }

  for(int i=0;i<B.size();i++)
  {
    cout<<temp[i]<<" ";
  }

    int ans = 0;
    int c1=0;
    sum=0;
    for(int i=0;i<A;i++)
    {   
        sum += B[i];
        if(sum==num1)
            {
                for(int j=i+2;j<A;j++)
                {
                    if(temp[j]==1)
                        c1++;

                }
            }
    }
    return c1;
}

int main()
{
    vector<int> A = {0,1,-1,0};
    cout<<solve(4,A);
    
} 