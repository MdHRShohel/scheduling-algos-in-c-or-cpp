#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[100][100],m,p,c=0;
    int n,i=0,j=0,z,obj_;
    double ob[100][100],temp[100][100];

    cout<<"HOW MANY OBJECTS TO CALCULATE:- ";
    cin>>n;
    cout<<"\nTOTAL WEIGHT- ";
    cin>>m;

    cout<<"PROFIT- "<<endl;
    for(int i=0;i<2;i++)
    {
        c++;
        for(int j=0;j<n;j++)
        {

            cout<<"OBJECT "<<j+1<<": ";
        cin>>a[i][j];
        }
        if(c==1)
        {
         cout<<"WEIGHT- "<<endl;
        }
    }
    while(j<n)
    {
        i=0;
        ob[j][0]=a[i][j]/a[i+1][j];
        ob[j][1]=a[i+1][j];
        ob[j][2]=a[i][j];
        j++;
    }
     for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(ob[j][0]<ob[j+1][0])
            {
                temp[j][0]=ob[j][0];
                temp[j][1]=ob[j][1];
                temp[j][2]=ob[j][2];


                ob[j][0]=ob[j+1][0];
                ob[j][1]=ob[j+1][1];
                ob[j][2]=ob[j+1][2];

                ob[j+1][0]=temp[j][0];
                ob[j+1][1]=temp[j][1];
                ob[j+1][2]=temp[j][2];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
       if(m>0&& ob[i][1]<=m)
       {
           m=m-ob[i][1];
           p=p+ob[i][2];
       }
       else
       {
           z=i;
           break;
       }
    }
    if(m>0)
    {
        p=p+(ob[z][2]*(m/ob[z][1]));
    }

    cout<<"\nGREEDY METHOD PROFIT "<<fixed<<setprecision(2)<<p<<endl;
}
