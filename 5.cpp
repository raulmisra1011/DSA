
#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int* v,int n1)
{
    int csum = v[0];
    int osum = v[0];
    for(int i=1;i<n1;i++)
    {
        if(csum < v[i] && csum < 0)
        {
            csum = v[i];
        }
        else
        {
            csum+=v[i];
            osum = max(osum,csum);
        }

    }
    return osum;

}
int main()
{
    int v[] = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(v,9);
}