#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i;
    cin>>n;
    for (i=2;i<sqrt(n)+1;i++)
    {
        if(n%i==0)
        {
            count=count+1;

        }
    }

      if (count==0)
       {
          cout<<"1";
       }
       else
       {
         cout<<"-1";
       }
       return 0;
}
