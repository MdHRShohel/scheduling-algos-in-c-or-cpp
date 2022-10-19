// digit like 12345678
// even=20 odd= 16

#include <iostream>
using namespace std;

int main() {
  int a,even=0,n,odd=0;
     cin>>n;      /*input digit*/
    while(n>0){
        a=n%10;
        n=n/10;
        if(a%2==0){
            even=even+a;
        }
        else{
            odd=odd+a;
        }
    }cout<<"even="<<even<<" "<<"odd="<<odd<<endl;

    return 0;
}
