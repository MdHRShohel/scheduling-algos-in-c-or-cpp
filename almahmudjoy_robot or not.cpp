#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char robotChk[10];
    int val;
    cout<<"Are You a Robot ? ";
    cin>>robotChk;
    val = strcmp("yes", robotChk);
    if(val==0)
        cout<<"\nYou can't Proceed!";
    else
        cout<<"\nYou're Welcome!";
    cout<<endl;
    return 0;
}
