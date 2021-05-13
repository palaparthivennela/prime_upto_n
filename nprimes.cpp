#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i,j;
    cout<<"enter a number";
    cin>>n;
    for(i=2;i<n;i++)
    {
        for(j=3;j<=sqrt(i)+1;j++)
        {
            if (i%j==0)
            {
                count=1;
                break;
            }
        }
        if (count==0)
        {
            cout<<i<<" ";
        }
        else
        {
            count=0;
        }
    }
return 0;
}
