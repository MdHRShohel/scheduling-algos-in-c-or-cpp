#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Gues a Number: ";
    cin>>num;
    if(num>10 && num<100)
        cout<<"\nWhat a True Guess!";
    else
        cout<<"\nOpps!";
    cout<<endl;
    return 0;
}
