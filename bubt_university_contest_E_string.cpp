#include<bits/stdc++.h>
using namespac std;

void solve()
{
    int n;
    string stn;
    cin>>stn;
    for(int i = 0; i <n/2; i++)
    {
        if(stn[i] == stn[n-j])
            continue;
        if(stn[i] == stn[n-j+1] || stn[i] == stn[n-j-1])
            continue;
        if(stn[i] == stn[n-j+1] || stn[i] == stn[n-j-1])
            continue;
    }
}

int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       solve();
   }
   return 0;
}
