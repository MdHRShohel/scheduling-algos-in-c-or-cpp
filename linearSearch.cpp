#include<bits/stdc++.h>

using namespace std;
int linear_search(int DATA[],int n,int item)
{
    int loc=0;

    for(int k=1;k<=n;k++)
    {
        if(DATA[k]==item)
        {   loc=k;
            break;
        }
    }
    if(loc==0)
    {
        cout<<"NOT FOUND";
    }
   else
    {
        cout<<"FOUND DATA["<<loc-1<<"]";
    }

}

int main()
{
    int DATA[100],n,item;
    cout<<"HOW MANY NUMBERS U WANT TO ENTER ";
    cin>>n;
    cout<<"INPUT: ";
    for(int i=1;i<=n;i++)
    {
    cin>>DATA[i];
    }
    cout<<"ITEM :";
   cin>>item;
    linear_search(DATA,n,item);

    return 0;
}
