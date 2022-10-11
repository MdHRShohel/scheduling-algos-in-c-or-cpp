#include<bits/stdc++.h>

using namespace std;


int binarysearch(int data[],int n,int item)
{
    int left=0,right=n,flag=0;
    while(left<=right)
    {
        int mid=(right+left)/2;

        if(item>data[mid])
        {
            left=mid+1;
        }
        else if(item<data[mid])
        {
            right=mid-1;
        }
        else
        {   flag=1;
            cout<<"Found data["<<mid<<"]";
            return mid;
        }
    }
    if(flag==0)
    {
        cout<<"Not found";
        return -1;
    }

}




int main()
{
    int data[100],n,item;
    cout<<"How many number you want to enter: ";
    cin>>n;
    cout<<"Input: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"Item: ";
    cin>>item;

    binarysearch(data,n,item);


}
