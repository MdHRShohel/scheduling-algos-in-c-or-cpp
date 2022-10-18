// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer)
// and the grade (an uppercase character), and depending upon which the total salary is calculated as -
// answer in roundoff eg 2.3=2 and 2.6=3
#include <iostream>
#include<cmath>
using namespace std;

int main() {
     float basic;
    float hra,da,pf;
    char allow;
    double total;
    cin>>basic>>allow;
    total=(basic+0.20*basic+0.50*basic-0.11*basic);
    
switch(allow){
        case 'A':
        cout<<round(total)+1700;
        break;
        case 'B':
        cout<<round(total)+1500;
        break;
        default:
        cout<<round(total)+1300;}
return 0;
}
