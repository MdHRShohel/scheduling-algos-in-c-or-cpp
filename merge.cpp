#include<bits/stdc++.h>

using namespace std;


void merge(int arr[],int low,int high,int mid)
{
    int i=low;
    int k=low;
    int j=mid+1;
    int temp[1000];

    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }


    }


    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        temp[k]=arr[j];
        j++;
        k++;

    }


    for(int i=low;i<k;i++)
    {
        arr[i]=temp[i];
    }


}

void merge_sort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;

        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }

}

int main()
{
    int myarray[1000], num;
    cout<<"HOW MANY NUMBERS U WANT TO ENTER: ";
    cin>>num;
    cout<<"INPUT: ";
    for (int i = 0; i < num; i++)
    {
        cin>>myarray[i];
    }
    merge_sort(myarray, 0, num-1);
    cout<<"Sorted array: ";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<" ";
    }


}
