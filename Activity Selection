#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct Activitiy
{
    int start,end;
};
bool comp(Activitiy arr1, Activitiy arr2)
{
    return (arr1.end<arr2.end);
}
void selection(Activitiy arr[],int size)
{
    sort(arr,arr+size,comp);
}

int main()
{

    int size;
    Activitiy arr[100];
    cout<<"How many number select do you want to take:- ";
    cin>>size;
    cout<<endl;
    cout<<"Input: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Start Time: ";
        cin>>arr[i].start;
        cout<<"End Time : ";
        cin>>arr[i].end;
        cout<<endl;
    }

    selection(arr,size);

    cout << "Selections: " << endl;
    int i = 0;
    cout << "Activity: " << i << " Start: " <<arr[i].start << " End: " << arr[i].end <<endl;

    for (int j = 1; j < size; j++) {
      if (arr[j].start >= arr[i].end) {
         cout << "Activity: " << j << " Start: " <<arr[j].start << " End: " << arr[j].end <<endl;
         i = j;
      }
   }
}
